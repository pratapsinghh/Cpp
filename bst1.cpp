#include<iostream>
using namespace std;
struct node {
   int data;
   node * left;
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
      return (root==NULL);
    }
    void insert(int);
    void display(struct node *);
    void print();
    int search(struct node*,int);
};
void bst::insert(int val)
{
    node* p=new node();
    p->data=val;
    p->left=NULL;
    p->right=NULL;
    if(isempty())
       root=p;
    else
    {
       node* ptr;
       node* parent;
       ptr=root;
       while(ptr!=NULL)
       {
           parent=ptr;
           if(val<ptr->data)
              ptr=ptr->left;
           else
               ptr=ptr->right;
       }
       if(parent->data > val)
           parent->left=p;
       else
          parent->right=p;
} 
}
void bst :: display(struct node *q)
{
  if(q==NULL)
     return;
  else
      {
        display(q->left);
        cout<<q->data;
        display(q->right);
      }
} 
void bst :: print()
{
   display(root);
   int num;
   cin>>num;
   if(search(root,num))
       cout<<"data is found "<<endl;
   else
      cout<<"data is not found "<<endl;
}
int bst :: search(struct node * root,int val)
{
   static int flag=0;
    if(root->data==val)
       flag=1;
    else
    {
    
        if(root->data > val)
        {
           search(root->left,val);
        }
        else
        {
            search(root->right,val);
        }
   }
   return flag;
}
int main()
{
   bst b;
   int val;
   cout<<"enter the node -:";
   for(int i=0;i<5;i++)
   {
     cin>>val;
     b.insert(val);
   }
   b.print();
   return 0;
}
