#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    int arr[n],arr1[n],arr2[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr1[i])
            arr2[i]=0;
        else
            arr2[i]=1;
    }
    for(i=0;i<n;i++)
        cout<<arr2[i]<<" ";
    return 0;
}
