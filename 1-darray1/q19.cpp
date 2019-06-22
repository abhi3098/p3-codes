#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,m1,m2=INT_MIN;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    m1=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>m1)
            m1=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>m2&&m1!=arr[i]){
            m2=arr[i];
            j=i;}
    }
    for(i=j;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
