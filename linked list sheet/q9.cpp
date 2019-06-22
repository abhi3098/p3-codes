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
void cal(node *head,int x)
{
    node *p=head;
    int sum=0;
    while(p!=NULL)
    {
        sum+=p->data*(pow(x,p->data1));
        p=p->next;
    }
    cout<<sum;
    return ;
}
int main()
{
    node *head=NULL;
    int x;
    cin>>x;
    ins(&head,5,2);
    ins(&head,4,1);
    ins(&head,2,0);
    print(head);
    cal(head,x);
    return 0;
}
