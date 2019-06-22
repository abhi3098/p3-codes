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
    int sum=0;
    ins(&h1,2);
    ins(&h1,1);
    ins(&h1,5);
    ins(&h1,7);
    print(h1);
    p=h1;
    while(p->next!=NULL)
    {
        if(p->data>p->next->data)
            sum+=p->data;
        p=p->next;
    }
    if(p->data>h1->data)
        sum+=p->data;
    cout<<sum;
    return 0;
}
