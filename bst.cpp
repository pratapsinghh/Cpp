#include<iostream>
using namespace std;
struct node
{
   int data;
   node *left;
   node *right;
};
class bst
{
   node *root;
   public:
      bst()
      {
         root=NULL;
      }
   int isempty()
   {
      return(root==NULL);
   }
   void insert(int );
   void display();
   void printbst(node *);
   void newnode(int);
};
void bst::insert(int val)
{
    node *p=new node();
    node *parent;
    p->data=val;
    p->left=NULL;
    p->right=NULL;
    parent=NULL;
    if(isempty())
        root=p;
    else
    {
        node *ptr;
        ptr=root;
        while(ptr!=NULL)
        {
          parent=ptr;
          if(val>ptr->data)
              ptr=ptr->right;
          else
              ptr=ptr->left;
        }
        if(val<parent->data)
           parent->left=p;
        else
            parent->right=p;
    }
}
void bst::display()
{
   printbst(root);
}
void bst::printbst(node *r)
{
   if(r!=NULL)
   {
      printbst(r->left);
      cout<<r->data<<" ";
      printbst(r->right);
   }
}
void bst:: newnode(int val)
{
   struct node *p=NULL;
   p=new node();
   p->data=val;
   p->left=NULL;
   p->right=NULL;
   struct node *r=root,*par=NULL;
   while(r!=NULL)
   {
     par=r;
     if(val<r->data)
     {
         r=r->left;
     }
     else
         r=r->right;
   }
   if(val<par->data)
      par->left=p;
   else
      par->right=p;
}
int main()
{
  int num,n;
  cout<<"enter the no. of node= ";
  cin>>n;
  bst b;
  for(int i=0;i<n;i++)
  {
     cin>>num;
     b.insert(num);
  }
  b.display();
  b.newnode(60);
  b.display();
  return 0;
}
  
