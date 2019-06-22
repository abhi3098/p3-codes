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
void loop(node *head)
{
    node *p1=head,*p2=head;
    if(head!=NULL)
    {
        while(p1!=NULL&&p2!=NULL&&p2->next!=NULL)
        {
            if(p1==p2&&p1!=head){
                cout<<"Loop";
                return ;}
                p1=p1->next;
                p2=p2->next->next;
        }
            cout<<"Not a loop";
    }
    return ;
}
int main()
{
    int c,n;
    node *head=NULL,*t;
    while(1)
    {
        cout<<"enter choice"<<endl;
        cin>>c;
        t=head;
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
                while(t->next!=NULL)
                    t=t->next;
                t->next=head->next;
                loop(head);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}
