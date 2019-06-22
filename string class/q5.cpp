#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c[26]={0};
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        c[s[i]-'a']++;
    }
    for(i=1;i<=25;i++)
        c[i]+=c[i-1];
    char ch[n];
    for(i=n-1;i>=0;i--)
    {
        j=(c[s[i]-'a']--)-1;
        ch[j]=s[i];
    }
    for(i=0;i<n;i++)
        cout<<ch[i]<<" ";
    return 0;
}
