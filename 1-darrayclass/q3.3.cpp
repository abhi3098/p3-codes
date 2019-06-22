#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
        cin>>arr1[i];
    i=j=0;
    while(i<n&&j<m)
    {
        if(arr[i]>arr1[j])
            j++;
        else if(arr[i]<arr1[j])
            i++;
        else
        {
            arr[i]=0;
            i++;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
            cout<<arr[i]<<" ";
    }
    return 0;
}
