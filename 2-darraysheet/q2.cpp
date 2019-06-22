#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>n*n||a[i][j]<1)
            {
                cout<<"not magic matrix1";
                exit(0);
            }
        }
    }
    int d1=0,d2=0,s1,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i][0];
    }
    cout<<sum<<endl;
    for(i=0;i<n;i++)
    {
        s1=0;
        for(j=0;j<m;j++)
        {
            s1+=a[i][j];
        }
        if(s1!=sum)
        {
            cout<<"not magic matrix2";
            exit(0);
        }
        cout<<s1<<" ";
    }
    cout<<endl;
    for(i=1;i<m;i++)
    {
        s1=0;
        for(j=0;j<n;j++)
        {
            s1+=a[j][i];
        }
        if(s1!=sum)
        {
            cout<<"not magic matrix3";
            exit(0);
        }
        cout<<s1<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
       d1+=a[i][i];
       d2+=a[i][n-1-i];
    }
        cout<<d1<<" "<<d2;
        if(d1!=sum||d2!=sum)
        {
            cout<<"not magic matrix4";
            exit(0);
        }
    cout<<"Magic matrix";
    return 0;
}
