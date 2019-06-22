#include<bits/stdc++.h>
using namespace std;
string rotate(string s,int st,int l)
{
    char t;
    if(st>l)
        return s;
    t=s[st];
    s[st]=s[l];
    s[l]=t;
    return rotate(s,++st,--l);
}
int main()
{
    int i,n;
    string s;
    cin>>s;
    n=s.length();
    s=rotate(s,0,n-1);
    cout<<s;
    return 0;
}
