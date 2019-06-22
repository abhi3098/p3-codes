#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>b[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            a[i][j]+=b[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
