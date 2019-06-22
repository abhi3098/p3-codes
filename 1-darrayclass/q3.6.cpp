#include<bits/stdc++.h>
using namespace std;
int inter(int arr1[],int arr2[],int arr[],int n,int m)
{
    int i=0,j=0,c=0,k=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else
        {
            arr[k]=arr1[i];
            k++;
            i++;
            j++;
            c++;
        }
    }
    return c;
}
int main()
{
    int i,n,m,l,c1,c2;
    cin>>n>>m>>l;
    int a[n],b[m],c[l],d[n+m],e[n+m+l];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<l;i++)
        cin>>c[i];
    c1=inter(a,b,d,n,m);
    c2=inter(d,c,e,n+m,l);
    for(i=0;i<c2;i++)
        cout<<e[i]<<" ";
    return 0;
}
