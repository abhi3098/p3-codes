#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data,flag;
    node *next;
};
void ins(node **head,int val)
{
    node *temp=new node();
    temp->data=val;
    temp->flag=0;
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
        return ;
    }
    node *pre=*head;
    while(pre->next!=NULL)
        pre=pre->next;
    pre->next=temp;
    return ;
}
void print(node *head)
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" "<<t->flag<<" ";
        t=t->next;
    }
    cout<<endl;
    return ;
}
int main()
{
    int f=0;
    node *head=NULL,*head1=NULL;
    ins(&head,5);
    ins(&head,10);
    ins(&head,15);
    ins(&head,20);
    ins(&head,50);
    ins(&head1,21);
    ins(&head1,55);
    print(head);
    print(head1);
    node *t=head,*t1=head1;
    while(t!=NULL)
    {
        t->flag=1;
        t=t->next;
    }
    print(head);
    /*while(t1->next!=NULL)
    {
        t1=t1->next;
    }
    t1->next=head->next;*/
    print(head1);
    t1=head1;
    while(t1!=NULL)
    {
        if(t1->flag==1)
        {
            f=1;
            break;
        }
        t1=t1->next;
    }
    if(f==1)
        cout<<"Y is there";
    else
        cout<<"Y is not there";
    return 0;
}
