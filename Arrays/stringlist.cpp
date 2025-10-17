
#include <iostream>
#include <String>

using namespace std;

struct node {
    string data;
    node* next;

node(string data){
 this->data=data;
 this->next=nullptr;}

};


int main(){

    string a[15]={"ia k agwk eifbjkws kiesf akiag ukg kggsg  liigsk klrs  lisn wiothwei iohgweui"};
   
   node * head=nullptr;
    node * tail=nullptr; 

    for(int i=0; i<15;i++)
   {
    node * n =new node(a[i]);
if(head==nullptr){
    head=n;
tail=n;}
    else{
        tail->next=n;
        tail=n;
    }
}
node* t =head;
   while(t!=nullptr){
    cout<<t->data<<" ";
    t=t->next;
   }
}
    //          node * n =new node("awais");
//              node * head=n;

// node * n2=new node("mumtaz ");
// node * n3=new node("khan ");
// node * n4=new node("ghallu ");
// n->next=n2;
// n2->next=n3;
// n3->next=n4;

// while(head!=nullptr){
//     cout<<head->data;
//     head=head->next;
// }
// }


