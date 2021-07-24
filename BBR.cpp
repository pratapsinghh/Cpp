#include<iostream>
using namespace std;
struct node
{
   int data;
   node* left;
   node* right;
};
class BBR
{
   node* root;
   public:
   BBR()
   {
      root=NULL;
   }
   int isempty()
   {
      return (root==NULL);
   }
   void create(int);
   void insert(struct node*,struct node *);
   void display();
   void print(struct node *);
};
void BBR::create(int val)
{
    struct node* p=new node();
    p->data=val;
    p->left=NULL;
    p->right=NULL;
    if(isempty())
       root=p;
    else
        insert(root,p);
}
void BBR::insert(struct node* root,struct node* q)
{
   if(root->data>q->data)
   {
      if(root->left==NULL)
         root->left=q;
      else
          insert(root->left,q);
   }
   else
   {
       if(root->right==NULL)
         root->right=q;
       else
       insert(root->right,q);
   }
}
void BBR :: display()
{
   print(root);
}
void BBR :: print(struct node *r)
{
   if(r!=NULL)
   {
      print(r->left);
      cout<<r->data<<" ";
      print(r->right);
   }
}
int main()
{
   BBR b;
   int val;
   cout<<"enter the node-:";
   for(int i=0;i<5;i++)
   {
      cin>>val;
      b.create(val);
   }
   b.display();
   return 0;
}
