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
    node *h1=NULL,*h2=NULL,*h3=NULL,*p1,*p2;
    ins(&h1,5);
    ins(&h1,2);
    ins(&h1,3);
    ins(&h1,8);
    ins(&h2,1);
    ins(&h2,7);
    ins(&h2,4);
    ins(&h2,5);
    print(h1);
    print(h2);
    p1=h1;
    p2=h2;
    while(p1!=NULL)
    {
        if(p1->data>p2->data)
            ins(&h3,p1->data);
        else
            ins(&h3,p2->data);
        p1=p1->next;
        p2=p2->next;
    }
    print(h3);
    return 0;
}
