#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string st;
    cin>>st;
    int l=st.length(),f=0,c,n1,n2,i;
    for(i=0;i<l;i++)
    {
        if(st[i]>='0'&&st[i]<='9')
            s.push(st[i]);
        else
        {
            if(st[i]=='+')
            {
                n1=s.top()-'0';
                s.pop();
                n2=s.top()-'0';
                s.pop();
                c=n1+n2;
                s.push(c+'0');
            }
            else if(st[i]=='-')
            {
                n1=s.top()-'0';
                s.pop();
                n2=s.top()-'0';
                s.pop();
                c=n1-n2;
                s.push(c+'0');
            }
            else if(st[i]=='*')
            {
                n1=s.top()-'0';
                s.pop();
                n2=s.top()-'0';
                s.pop();
                c=n1*n2;
                s.push(c+'0');
            }
            else if(st[i]=='/')
            {
                n1=s.top()-'0';
                s.pop();
                n2=s.top()-'0';
                s.pop();
                c=n1/n2;
                s.push(c+'0');
            }
            else if(st[i]=='%')
            {
                n1=s.top()-'0';
                s.pop();
                n2=s.top()-'0';
                s.pop();
                c=n1%n2;
                s.push(c+'0');
            }
            else if(st[i]=='^')
            {
                n1=s.top()-'0';
                s.pop();
                n2=s.top()-'0';
                s.pop();
                c=pow(n1,n2);
                s.push(c+'0');
            }
            else
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    {
        cout<<s.top()<<" ";}
    else
        cout<<"Invalid";
    return 0;
}
