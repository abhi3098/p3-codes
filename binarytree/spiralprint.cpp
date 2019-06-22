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
void print1(node *root,int lev)
{
    if(root==NULL)
        return ;
    if(lev==1)
    {
        cout<<root->data<<endl;
        return ;
    }
    print1(root->left,lev-1);
    print1(root->right,lev-1);
}
void print2(node *root,int lev)
{
    if(root==NULL)
        return ;
    if(lev==1)
    {
        cout<<root->data<<endl;
        return ;
    }
    print2(root->right,lev-1);
    print2(root->left,lev-1);
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
    int i,h;
    h=height(root);
    cout<<h<<endl;
    for(i=1;i<=h;i++)
    {
        if(i%2==0)
            print2(root,i);
        else
            print1(root,i);
    }
    return 0;
}
