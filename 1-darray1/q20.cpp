#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    for(i=k;i<n-1;i++)
        arr[i]=arr[i+1];
    n--;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
