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
int middle(node *head)
{
    node *p1=head,*p2=head;
    if(head!=NULL)
    {
        while(p1->next!=NULL && p2->next!=NULL && (p2->next)->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
        return p1->data;
    }
}
void palin(node *h1,node *h2,int v)
{
    node *p1=h1,*p2=h2;
    int f=0;
    while(p2!=NULL&&p1->data!=v)
    {
        if(p1->data!=p2->data)
        {
            f=1;
            break;
        }
        p1=p1->next;
        p2=p2->next;
    }
    if(f==1)
        cout<<"Not Palindrome"<<endl;
    else
        cout<<"Palindrome"<<endl;
    return ;
}
int main()
{
    int v,c,n;
    node *head=NULL,*p;
    while(1)
    {
        cout<<"enter choice"<<endl;
        cin>>c;
        switch(c)
        {
            case 1:
                cout<<"Enter value"<<endl;
                cin>>n;
                ins(&head,n);
                break;
            case 2:
                print(head);
                break;
            case 3:
                p=head;
                while(p->data!=v)
                    p=p->next;
                rev(&(p->next));
                break;
            case 4:
                palin(head,p->next,v);
                break;
            case 5:
                v=middle(head);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}
