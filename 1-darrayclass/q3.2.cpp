#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,n,m,i,j,k=0;
    cin>>n>>m;
    int arr[n+m],arr1[n],arr2[m];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(j=0;j<m;j++)
        cin>>arr2[j];
    i=j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j]&&arr1[i]!=t)
        {
            arr[k]=arr1[i];
            i++;
            t=arr1[i-1];
        }
        else if(arr1[i]>arr2[j]&&t!=arr2[j])
        {
            arr[k]=arr2[j];
            j++;
            t=arr2[j-1];
        }
        else if(t!=arr1[i])
        {
            arr[k]=arr1[i];
            i++;
            j++;
            t=arr1[i-1];
        }
        k++;
    }
    while(i<n)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
    for(i=0;i<k;i++)
        cout<<arr[i]<<" ";
    return 0;
}
