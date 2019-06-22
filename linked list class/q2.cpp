#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void ins(node **head,int val)
{
    node *temp=new node();
    temp->data=val;
    temp->next=*head;
    *head=temp;
    return ;
}
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head=NULL;
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=n-1;i>=0;i--)
        ins(&head,a[i]);
    print(head);
    return 0;
}
