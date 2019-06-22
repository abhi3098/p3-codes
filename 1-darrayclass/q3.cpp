#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,n,m;
    cin>>n;
    cin>>m;
    int arr1[n],arr2[m],arr3[n+m];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(j=0;j<m;j++)
        cin>>arr2[j];
    i=j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(i=0;i<k;i++)
        cout<<arr3[i]<<" ";
    return 0;
}
