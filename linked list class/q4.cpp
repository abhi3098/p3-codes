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
void middle(node *head)
{
    node *p1=head,*p2=head;
    if(head!=NULL)
    {
        while(p1->next!=NULL && p2->next!=NULL && (p2->next)->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
        cout<<p1->data<<endl;
    }
}
int main()
{
    node *head=NULL;
    int n,c;
    while(1)
    {
        cout<<"enter choice"<<endl;
        cin>>c;
        switch(c)
        {
            case 1:
                cout<<"enter value"<<endl;
                cin>>n;
                ins(&head,n);
                break;
            case 2:
                print(head);
                break;
            case 3:
                middle(head);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}
