#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
int ma(int,int,int);
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int diameter(node *root)
{
    if(root==NULL)
        return 0;
    return ma(height(root->left)+height(root->right),diameter(root->left),diameter(root->right));
}
int ma(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
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
    int ans;
    ans=diameter(root);
    cout<<ans;
    return 0;
}
