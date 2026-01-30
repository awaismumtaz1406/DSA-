#include <iostream>
using namespace std;
class node{
    public:
int id;
node* le;
node * rig;

node(int v){
    id=v;
    le=rig=nullptr;
}
};


node * root=nullptr;
node * c=nullptr;

void insert(int a){
node * nn=new node(a);

if(root==nullptr)
root=nn;

node *p=root;	
node *q=nullptr;
    while(p!=nullptr){
     q=p;
     if(c->id>q->id)
         p = p->rig;
    else 
        p = p->le;     
}
  if(c->id>q->id)
      p->rig=c;
    else 
      p->le=c;
}

void preorder(node* root){
    if(root==nullptr)
     return ;

cout<<root->id<<endl;
  preorder(root->le);
  preorder(root->rig);
}

void inorder(node* root){
    if(root==nullptr)
     return ;
 
  inorder(root->le);
  cout<<root->id<<endl;
  inorder(root->rig);
}

void postorder(node* root){
    if(root==nullptr)
     return ;
 
  postorder(root->le);
  postorder(root->rig);
  cout<<root->id<<endl;
}

//void recursive(node * root , node * c){
//	if(root==nullptr)
//	root=c;
//	
//	recursive()
	
	
	

int main(){
insert(20);
insert(10);
insert(30);
insert(25);

inorder(root);
cout<<" inorder:";
}







	

