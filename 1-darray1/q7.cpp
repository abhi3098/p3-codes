#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<=n/2;i++)
    {
        t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
