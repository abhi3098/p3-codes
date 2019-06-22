#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int a[n][m],b[n*m],f=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[f]=a[i][j];
            f++;
        }
    }
    for(i=0;i<f;i++)
        cout<<b[i]<<" ";
    return 0;
}
