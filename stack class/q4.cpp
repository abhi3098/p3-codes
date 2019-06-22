#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string st;
    int i,l,f=0;
    cin>>st;
    l=st.length();
    for(i=0;i<l;i++)
    {
        if(st[i]=='('||st[i]=='{'||st[i]=='[')
            s.push(st[i]);
        else
        {
            if(st[i]==')'&&s.top()=='(')
                s.pop();
            else if(st[i]=='}'&&s.top()=='{')
                s.pop();
            else if(st[i]==']'&&s.top()=='[')
                s.pop();
            else
            {
                f=1;
                break;
            }
        }
    }
    if(f==0&&s.empty()==true)
        cout<<"Valid";
    else
        cout<<"Invalid";
    return 0;
}
