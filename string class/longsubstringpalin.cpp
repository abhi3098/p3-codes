#include<bits/stdc++.h>
using namespace std;
int palin(char c[])
{
    int f=0,i,l=0;
    for(i=0;c[i]!='\0';i++)
        l++;
    for(i=0;i<=l/2;i++)
    {
        if(c[i]!=c[l-1-i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        return l;
    else
        return 0;
}
int main()
{
    int k,i,j,n,c,l,l1=INT_MIN;
    string s,s1="";
    cin>>s;
    n=s.length();
    char sub[n+1];
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            sub[c]=s[j];
            c++;
            sub[c]='\0';
            cout<<sub<<endl;
            l=palin(sub);
            if(l>l1)
            {
                s1="";
                l1=l;
                for(k=0;k<c;k++)
                    s1+=sub[k];
            }
        }
    }
    cout<<s1;
    return 0;
}
