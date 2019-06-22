#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=INT_MIN,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        c=INT_MIN;
        for(j=0;j<m;j++)
        {
            if(c<a[i][j])
                c=a[i][j];
        }
        cout<<c<<" ";
    }
    cout<<endl;
    for(i=0;i<m;i++)
    {
        c=INT_MIN;
        for(j=0;j<n;j++)
        {
            if(c<a[j][i])
                c=a[j][i];
        }
        cout<<c<<" ";
    }
    return 0;
}
