#include<bits/stdc++.h>
using namespace std;
int dec(int a[],int n)
{
    int i=0,j,n1=0;
    for(j=n-1;j>=0;j--)
    {
        n1=n1+(a[j]*pow(2,i));
        i++;
    }
    return n1;
}
int main()
{
    int i,n,m,a,b;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
        cin>>arr1[i];
    a=dec(arr,n);
    b=dec(arr1,m);
    a=abs(a-b);
    cout<<a;
    return 0;
}
