#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    char t;
    cin>>n;
    cin>>s;
    for(i=0;i<=n/2;i++)
    {
        t=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=t;
    }
    cout<<s;
    return 0;
}
