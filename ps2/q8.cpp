#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j,n,s1=0,s2;
    cin>>n;
    s2=n-2;
    cout<<i;
    for(j=1;j<=s2+1;j++)
        cout<<" ";
    cout<<i;
    cout<<endl;
    for(i=2;i<=n;i++)
    {
        cout<<i;
        for(j=1;j<=s1;j++)
            cout<<" ";
        cout<<i;
        for(j=1;j<=s2;j++)
            cout<<" ";
        cout<<i;
        cout<<endl;
        s1++;
        s2--;
    }
    /*cout<<i;
    for(j=1;j<=s1;j++)
        cout<<" ";
    cout<<i;*/
    return 0;
}
