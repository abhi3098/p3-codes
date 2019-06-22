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
        *head= temp;
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
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
    return ;
}
int main()
{
    node *h1=NULL,*p;
    ins(&h1,5);
    ins(&h1,2);
    ins(&h1,3);
    ins(&h1,8);
    print(h1);
    p=h1;
    while(p->next!=NULL)
        p=p->next;
    p->next=h1;
    p=h1;
    while(p->next!=h1)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data<<" ";
    return 0;
}
