#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    cin>>n;
    int arr[n],arr1[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(j=0;j<n;j++)
        cin>>arr1[j];
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0&&arr1[i]%2==0)
            arr[i]+=arr1[i];
        else if(arr[i]%2!=0&&arr1[i]%2!=0)
            arr[i]*=arr1[i];
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
