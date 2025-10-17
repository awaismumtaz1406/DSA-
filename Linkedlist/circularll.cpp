#include <iostream>
using namespace std;

class node
{
public:
	int d;
	node *n;
	node *pr;

	node(int d)
	{
		this->d = d;
		n = pr = nullptr;
	}
};
class circular
{
public:
	node *h;
	node *ta;

public:
	circular()
	{
		h = ta = nullptr;
	}

	void insert(int d)
	{
		node *nn = new node(d);
		if (h == nullptr)
		{
			h = ta = nn;
			ta->n = h;
		}
		else
		{
			nn->n = h;
			h = nn;
			ta->n = h;
		}
	}

	void insertend(int d)
	{
		node *nn = new node(d);
		if (h == nullptr)
		{
			h = ta = nn;
			ta->n = h;
		}
		else
		{
			nn->n = h;
			ta->n = nn;
			ta = nn;
		}
	}

	void delhead()
	{
		if (h == nullptr)
			cout << "nothong to del";
		else if (h == ta)
		{
			delete h;
			h = ta = nullptr;
		}
		else
		{

			node *t = h;
			h = h->n;
			ta->n = h;
			delete t;
		}
	}

	void deltail()
	{
		node *temp;
		if (h == nullptr)
			cout << "nothong to del";

		else if (h == ta)
		{
			delete h;
			h = ta = nullptr;
		}
		else
		{
			temp = ta->pr;
			temp->n = ta->n;
			ta->n->pr == ta;
			delete ta;
			ta = temp;
		}
	}
    
	void delmiddle(int p){
node* c=ta;
while(p>1){
	c=c->n;
	p--;
}
node * temp=c->pr;
temp->n=c->n;
c->n->pr=temp;
	}

	
	void print()
	{
		node *temp1 = h;
		do
		{
			cout << temp1->d << "->";
			temp1 = temp1->n;
		} while (temp1 != h);
	}
};

int main()
{
	circular l;
	l.insert(45);
	l.insert(34);
	l.insert(67);
	l.insertend(23);
	l.delmiddle(3);
	// l.delhead();
	l.deltail();
	l.print();
}