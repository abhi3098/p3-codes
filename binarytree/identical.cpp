#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
int identical(node *r1,node *r2)
{
    if(r1==NULL&&r2==NULL)
        return 1;
    if((r1==NULL)||(r2==NULL))
        return 0;
    if(r1->data==r2->data)
    {
        if(identical(r1->left,r2->left)&&identical(r1->right,r2->right))
            return 1;
    }
    return 0;
}
int main()
{
    node *root1,*root2;
    root1=new node();
    root1->data=5;
    node *temp;
    temp=new node();
    temp->data=15;
    root1->left=temp;
    temp=new node();
    temp->data=21;
    root1->left->left=temp;
    temp=new node();
    temp->data=20;
    root1->right=temp;
    temp=new node();
    temp->data=17;
    root1->right->right=temp;
    root2=new node();
    root2->data=5;
    temp=new node();
    temp->data=15;
    root2->left=temp;
    temp=new node();
    temp->data=21;
    root2->left->left=temp;
    temp=new node();
    temp->data=20;
    root2->right=temp;
    /*temp=new node();
    temp->data=17;
    root2->right->right=temp;*/
    int f;
    f=identical(root1,root2);
    if(f==1)
        cout<<"Identical";
    else
        cout<<"Not identical";
    return 0;
}
