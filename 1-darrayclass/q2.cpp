#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,j,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>d;
    for(i=0;i<d;i++)
    {
        temp=arr[0];
        for(j=0;j<n-1;j++)
            arr[j]=arr[j+1];
        arr[n-1]=temp;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
