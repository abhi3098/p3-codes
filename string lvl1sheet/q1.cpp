#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        s[i]-=32;
    }
    cout<<s;
    return 0;
}
