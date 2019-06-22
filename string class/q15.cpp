#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,l,i,n;
    string s;
    cin>>s;
    n=s.length();
    cin>>l;
    char temp;
    for(i=0;i<l;i++)
    {
        temp=s[0];
        for(j=0;j<n-1;j++)
            s[j]=s[j+1];
        s[n-1]=temp;
    }
    for(i=0;i<n;i++)
        cout<<s[i]<<" ";
    return 0;
}
