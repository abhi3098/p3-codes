#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int isbalance(node *root)
{
    if(root==NULL)
        return 1;
    int lefth=height(root->left);
    int righth=height(root->right);
    if(abs(lefth-righth)<=1&&isbalance(root->left)&&isbalance(root->right))
        return 1;
    return 0;
}
int main()
{
    node *root;
    root=new node();
    root->data=5;
    node *temp;
    temp=new node();
    temp->data=15;
    root->left=temp;
    temp=new node();
    temp->data=21;
    root->left->left=temp;
    temp=new node();
    temp->data=20;
    root->right=temp;
    temp=new node();
    temp->data=17;
    root->right->right=temp;
    int f;
    f=isbalance(root);
    if(f==1)
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    return 0;
}
