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
void print1(node *root,int lev,queue<int> &q)
{
    if(root==NULL)
        return ;
    if(lev==1)
    {
        q.push(root->data);
        return ;
    }
    print1(root->left,lev-1,q);
    print1(root->right,lev-1,q);
}
void print2(node *root,int lev,stack<int> &s)
{
    if(root==NULL)
        return ;
    if(lev==1)
    {
        s.push(root->data);
        return ;
    }
    print2(root->left,lev-1,s);
    print2(root->right,lev-1,s);
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
    stack<int> s;
    queue<int> q;
    for(i=1;i<=h;i++)
    {
        if(i%2==0)
        {
            print2(root,i,s);
            while(!s.empty())
            {
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        else
        {
            print1(root,i,q);
            while(!q.empty())
            {
                cout<<q.front()<<" ";
                q.pop();
            }
        }
    }
    return 0;
}
