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
void rev(node **head)
{
    node *pre=NULL,*current=*head,*right=(*head)->next;
    while(current->next!=*head)
    {
        right=current->next;
        current->next=pre;
        pre=current;
        current=right;
    }
    (*head)->next=current;
    *head=current;
}
int main()
{
    node *head=NULL,*p;
    ins(&head,10);
    ins(&head,8);
    ins(&head,4);
    ins(&head,5);
    print(head);
    p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=head;
    rev(&head);
    cout<<endl;
    p=head;
    while(p->next!=head)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data<<" ";
    return 0;
}
