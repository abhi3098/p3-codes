#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0,n,m,f,i,j;
    cin>>n;
    cin>>m;
    if(n<m)
        f=n;
    else
        f=m;
    int arr[f],arr1[n],arr2[m];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(j=0;j<m;j++)
        cin>>arr2[j];
    i=j=0;
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
        }
    }
    if(k==0)
        cout<<"no element";
    else
    {
        for(i=0;i<k;i++)
            cout<<arr[i]<<" ";
    }
    return 0;
}
