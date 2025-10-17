
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void delend(Node* &head){
    Node* t=head;
while(head->next!=nullptr){
   head=head->next;
   } 
   delete t->next;
   t->next=nullptr;
}

void del(Node* &head){
while(head->next!=nullptr){
if(head==nullptr){
    cout<<"nothing delete";
   Node* t=head;
   head=head->next;
   delete t;}    }
}

void delspec(Node* &head, int k){
    Node* c=head;
while(c->next!=nullptr &&c->next->data!=k){
    c=c->next;}
   Node* t=head;
   c->next=c->next->next;
   delete t;}    

   void delallnodes(Node* &head){
    Node* ptr=head;
while(ptr!=nullptr){
   ptr=ptr->next;
   delete head;
   head=ptr;}
}

void search(Node* &head, int k){
    Node* t=head;
while(t!=nullptr){
   if(t->data==k){
    cout<<"yes found";
   }
}
    cout<<"not found";

}


void print(Node* head){
while(head!=nullptr){
cout<<head->data<<" ";
head=head->next;}
}



int main(){
    Node * tail =nullptr;
Node* head = new Node{1, nullptr};
head->next = new Node{2, nullptr};
head->next->next = new Node{3, nullptr};
head->next->next->next = new Node{4, nullptr};
head->next->next->next->next = new Node{5, nullptr};
search(head,4);
// delspec(head,4);
// del(head);
// delend(head);
// delallnodes(head);
// print(head);
}
