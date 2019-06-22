#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
int mirror(node *r1,node *r2)
{
    if(r1==NULL&&r2==NULL)
        return 1;
    if((r1==NULL)||(r2==NULL))
        return 0;
    if(r1->data==r2->data)
    {
        if(mirror(r1->left,r2->right)&&mirror(r1->right,r2->left))
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
    temp->data=20;
    root2->left=temp;
    temp=new node();
    temp->data=17;
    root2->left->left=temp;
    temp=new node();
    temp->data=15;
    root2->right=temp;
    temp=new node();
    temp->data=21;
    root2->right->right=temp;
    int f;
    f=mirror(root1,root2);
    if(f==1)
        cout<<"Mirror";
    else
        cout<<"Not Mirror";
    return 0;
}
