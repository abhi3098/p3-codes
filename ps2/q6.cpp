#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,space,c1=1,c2;
    cin>>n;
    space=n-2;
    c2=n;
    for(i=1;i<n;i++)
    {
        cout<<c1;
        for(j=1;j<=space;j++)
            cout<<" ";
        cout<<c2<<endl;
        c1++;
        c2--;
    }
    for(i=1;i<=n;i++)
    {
        cout<<c1;
        c1--;
    }
    cout<<endl;
    c1=n-1;
    c2++;
    for(i=1;i<n;i++)
    {
        cout<<c1;
        for(j=1;j<=space;j++)
            cout<<" ";
        cout<<c2<<endl;
        c1--;
        c2++;
    }
    return 0;
}
