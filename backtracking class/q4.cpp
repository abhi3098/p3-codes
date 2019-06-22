#include<bits/stdc++.h>
using namespace std;
void gstring(char *s,int st,int end)
{
    int i;
    if(st==end)
    {
        s[st]='\0';
        cout<<s<<endl;
        return ;
    }
    for(i=1;i<=9;i++)
    {
        s[st]='0'+i;
        gstring(s,st+1,end);
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
