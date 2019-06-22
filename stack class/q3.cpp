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
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
        return ;
    }
    node *last=*head;
    while(last->next!=NULL)
        last=last->next;
    last->next=temp;
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
void pri(node *head,int k)
{
    stack<int> s;
    node *temp=head;
    int i;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp=temp->next;
    }
    for(i=0;i<k;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return ;
}
int main()
{
    node *head=NULL;
    int k;
    cin>>k;
    ins(&head,10);
    ins(&head,8);
    ins(&head,9);
    ins(&head,45);
    print(head);
    pri(head,k);
    return 0;
}
