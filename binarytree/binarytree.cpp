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
void print(node *root,int lev)
{
    if(root==NULL)
        return ;
    if(lev==1)
    {
        cout<<root->data<<endl;
        return ;
    }
    print(root->left,lev-1);
    print(root->right,lev-1);
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
        print(root,i);
    return 0;
}
