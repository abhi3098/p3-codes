#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,c1,c2,i,c,max=INT_MIN,min=INT_MAX,j,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        c=0;
        x=0;
        for(j=m-1;j>=0;j--)
        {
            c+=a[i][j]*pow(2,x);
            x++;
        }
        if(c>max)
        {
            max=c;
            c1=i;
        }
        else if(c<min)
        {
            min=c;
            c2=i;
        }
    }
    cout<<c2<<endl;
    cout<<c1;
    return 0;
}
