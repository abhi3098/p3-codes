#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,n;
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n-1;i++)
    {
        cout<<s[i]<<" ";
        for(j=i+1;j<n;j++)
        {
            for(k=i;k<=j;k++)
                cout<<s[k];
            cout<<" ";
        }
    }
    cout<<s[n-1]<<" ";
    return 0;
}
