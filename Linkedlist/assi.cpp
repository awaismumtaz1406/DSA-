
#include <iostream>
using namespace std;

struct node {
    int rollno;
    string name;
    string dept;
    node* next;

    node(int r, string n, string d)
{
    this->rollno=r;
    this->name=n;
    this->dept=d;
        this->next=nullptr;

}
};

void insertbegin(){
    
}

void print(node* head){
    node* t=head;
    while(t!=nullptr){
      cout<<t->rollno<<endl;
      cout<<t->name<<endl;
      cout<<t->dept<<endl;
      t=t->next;
    }

}


int main(){
node* n=new node(12,"awais","CS");
node* head =n;
 head->next=new node(13,"awais","CS");
head->next->next=new node(15,"awais","CS");
insert()
print(head);

}