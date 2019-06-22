#include<bits/stdc++.h>
using namespace std;
int cal(char *s)
{
    int i,l,f=0,n=0;
    l=strlen(s);
    for(i=0;i<l-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        for(i=0;i<l;i++)
            n=n*10+(s[i]-'0');
        if(n%7==0)
            return 1;
        else
            return 0;
    }
    return 0;
}
void permute(char str[],int l,int r)
{
    int i,f;
    if(l==r)
    {
        f=cal(str);
        if(f==1)
            cout<<str<<endl;
        return ;
    }
    for(i=l;i<r;i++)
    {
        swap(str[l],str[i]);
        permute(str,l+1,r);
        swap(str[l],str[i]);
    }
}
int main()
{
    char str[]="123";
    int len=strlen(str);
    permute(str,0,len);
    return 0;
}
