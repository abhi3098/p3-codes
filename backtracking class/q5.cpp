#include<bits/stdc++.h>
using namespace std;
int check(char *s,int l)
{
    int i,sum=0;
    for(i=0;i<l;i++)
    {
        sum=sum*10+(s[i]-'0');
    }
    if(sum%7==0)
        return 1;
    else
        return 0;
}
void gstring(char *s,int st,int l)
{
    int i,f;
    if(st==l)
    {
        s[st]='\0';
        f=check(s,st);
        if(f==1)
            cout<<s<<endl;
        return ;
    }
    for(i=1;i<=9;i++)
    {
        s[st]='0'+i;
        gstring(s,st+1,l);
    }
}
int main()
{
    int k;
    cin>>k;
    char s[k+1];
    gstring(s,0,k);
    return 0;
}
