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
    while(current!=NULL)
    {
        right=current->next;
        current->next=pre;
        pre=current;
        current=right;
    }
    *head=pre;
}
int main()
{
    node *head=NULL;
    ins(&head,10);
    ins(&head,8);
    ins(&head,4);
    ins(&head,5);
    print(head);
    rev(&head);
    cout<<endl;
    print(head);
    return 0;
}
