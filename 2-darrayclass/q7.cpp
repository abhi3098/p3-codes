#include<bits/stdc++.h>
using namespace std;
void rev(int **a,int k,int n,int m)
{
    int r,c;
    if(k<n)
        r=0;
    else
        r=k-n+1;
    if(k<m)
        c=k;
    else
        c=m-1;
    while(r<n&&c>=0)
    {
        cout<<a[r][c]<<" ";
        r++;
        c--;
    }
}
void str(int **a,int k,int n,int m)
{
    int r,c;
    if(k<n)
        r=k;
    else
        r=n-1;
    if(k<m)
        c=0;
    else
        c=k-m+1;
    while(r>=0&&c<m)
    {
        cout<<a[r][c]<<" ";
        r--;
        c++;
    }
}
int main()
{
    int r,c,i,j,n,m;
    cin>>n>>m;
    int **a;
    a=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
        a[i]=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    int k;
    for(k=0;k<=2*n-1;k++)
    {
        if(k%2==0)
            rev(a,k,n,m);
        else
            str(a,k,n,m);
    }
    return 0;
}
