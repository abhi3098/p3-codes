#include<bits/stdc++.h>
using namespace std;
void gs(char *s,int p,int e)
{
    if(p==e)
    {
        s[p]='\0';
        cout<<s<<endl;
        return ;
    }
    if(s[p-1]=='1')
    {
        s[p]='0';
        gs(s,p+1,e);
    }
    else
    {
        s[p]='0';
        gs(s,p+1,e);
        s[p]='1';
        gs(s,p+1,e);
    }
}
int main()
{
    int k;
    cin>>k;
    char s[k+1];
    s[0]='0';
    gs(s,1,k);
    s[0]='1';
    gs(s,1,k);
    return 0;
}
