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
void del(node **head,int val)
{
    node *temp=*head,*prev;
    if(temp->data==val)
    {
        *head=temp->next;
        delete(temp);
        return ;
    }
    while(temp->data!=val&&temp!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Not found";
        return ;
    }
    prev->next=temp->next;
    delete(temp);
    return ;
}
int main()
{
    node *head=NULL;
    ins(&head,10);
    ins(&head,8);
    print(head);
    del(&head,10);
    print(head);
    return 0;
}
