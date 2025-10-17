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

class doubly{
	public:
node *h;
node *t;
	public:
doubly(){
    h=t=nullptr;
}

void insert(int d){
node* nn=new node(d);
if(h==NULL){
	h=t=nn;
}
else{
	nn->n=h;
	h->pr=nn;
	h=nn;
}

}

void reverse(){
node * c=h;
while(c!=nullptr)
node *t=c->pr;
c->pr=c->n;
c->n=t;
c=c->n;
    }

};

int main(){

	doubly l;
	int n,d;
cout<<"enter nos of emlement";
cin>>n;
for(int i=0; i<n; i++){
	cout<<"enter  element";
	cin>>d;
	l.insert(d);
}
}










