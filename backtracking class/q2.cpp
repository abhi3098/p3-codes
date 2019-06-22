#include<bits/stdc++.h>
using namespace std;
void gstring(char *s,int st,int end)
{
    if(st==end)
    {
        s[st]='\0';
        cout<<s<<endl;
        return ;
    }
    s[st]='0';
    gstring(s,st+1,end);
    s[st]='1';
    gstring(s,st+1,end);
}
int main()
{
    int k;
    cin>>k;
    char s[k+1];
    gstring(s,0,k);
    return 0;
}
