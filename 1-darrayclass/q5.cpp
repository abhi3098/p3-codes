#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int arr[n],t;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n-1;i+=2)
    {
        t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
