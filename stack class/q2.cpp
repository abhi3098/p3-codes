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
node* rev(node *head)
{
    stack<node*> s;
    node *temp=head;
    while(temp->next!=NULL)
    {
        s.push(temp);
        temp=temp->next;
    }
    head=temp;
    while(!s.empty())
    {
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
int main()
{
    node *head=NULL;
    ins(&head,10);
    ins(&head,8);
    ins(&head,9);
    ins(&head,45);
    print(head);
    head=rev(head);
    print(head);
    return 0;
}
