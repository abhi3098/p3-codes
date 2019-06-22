#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,max=INT_MIN;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=1;i<n-1;i++)
    {
        max=INT_MIN;
        for(j=1;j<m-1;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
        cout<<max<<endl;
    }
    return 0;
}
