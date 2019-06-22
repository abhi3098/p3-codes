#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data,data1;
    node *next;
};
void ins(node **head,int v,int v1)
{
    node *temp=new node();
    temp->data=v;
    temp->data1=v1;
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
        return ;
    }
    node *prev=*head;
    while(prev->next!=NULL)
        prev=prev->next;
    prev->next=temp;
    return ;
}
void print(node *head)
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" "<<t->data1<<" ";
        t=t->next;
    }
    cout<<endl;
    return ;
}
int main()
{
    node *head=NULL,*h1=NULL,*h2=NULL;
    ins(&head,3,2);
    ins(&head,5,1);
    ins(&head,6,0);
    ins(&h1,6,1);
    ins(&h1,8,0);
    print(head);
    print(h1);
    node *p1=head,*p2=h1,*h3=NULL;
    while(p1!=NULL)
    {
        p2=h1;
        while(p2!=NULL)
        {
            ins(&h2,p1->data*p2->data,p1->data1+p2->data1);
            p2=p2->next;
        }
        p1=p1->next;
    }
    print(h2);
    int t1,t2;
    t1=h2->data;
    t2=h2->data1;
    p1=h2->next;
    while(p1!=NULL)
    {
        if(p1->data1==t2)
        {
            t1+=p1->data;
        }
        else
        {
            ins(&h3,t1,t2);
            t1=p1->data;
            t2=p1->data1;
        }
        p1=p1->next;
    }
    ins(&h3,t1,t2);
    print(h3);
    return 0;
}
