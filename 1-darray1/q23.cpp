#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c0=0,c1=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
            c1++;
        else
            c0++;
    }
    i=0;
    while(c0>0&&c1>0)
    {
        if(i%2==0)
        {
            arr[i]=0;
            c0--;
        }
        else
        {
            arr[i]=1;
            c1--;
        }
        i++;
    }
    while(c0>0)
    {
        arr[i]=0;
        i++;
        c0--;
    }
    while(c1>0)
    {
        arr[i]=1;
        i++;
        c1--;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
