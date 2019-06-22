#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(j=0;j<m;j++)
        cin>>arr2[j];
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    i=j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else{
        arr1[i]=0;
            i++;
            j++;}
    }
    /*while(i<n)
        cout<<arr1[i++];*/
    for(i=0;i<n;i++)
    {
        if(arr1[i]!=0)
            cout<<arr1[i]<<" ";
    }
    return 0;
}
