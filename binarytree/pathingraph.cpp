#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
void print(node *root,int a[],int start)
{
    if(root==NULL)
        return ;
    if(root->right==NULL&&root->left==NULL)
    {
        for(int i=0;i<start;i++)
            cout<<a[i]<<" ";
        cout<<root->data<<" ";
        cout<<endl;
    }
    else
    {
        a[start]=root->data;
        print(root->left,a,start+1);
        print(root->right,a,start+1);
    }
    return ;
}
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int main()
{
    int h;
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
    h=height(root);
    int a[h];
    print(root,a,0);
    return 0;
}
