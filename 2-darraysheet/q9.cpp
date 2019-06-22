#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,n,j;
    cin>>n;
    int a[n][n],b[n][n],c[n][n]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>b[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
