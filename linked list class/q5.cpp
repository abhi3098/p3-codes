#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
int findk(node *,int);
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
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
    return ;
}
void palin(node *head)
{
    int c=0;
    node *t=head;
    while(t!=NULL)
    {
        c++;
        t=t->next;
    }
    int b=0,e=c-1;
    while(b<=e)
    {
        if(findk(head,b)!=findk(head,e))
        {
            cout<<"Not palin"<<endl;
            return ;
        }
        b++;
        e--;
    }
    cout<<"Palin"<<endl;
    return ;
}
int findk(node *head,int v)
{
    node *t=head;
    int c=0;
    while(t!=NULL&&c!=v)
    {
        t=t->next;
        c++;
    }
    return t->data;
}
int main()
{
    int c,n;
    node *head=NULL;
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
                palin(head);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}
