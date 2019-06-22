#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<=n/2;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j>i){
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;}
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
