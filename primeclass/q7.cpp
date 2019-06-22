#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m1,m2,m3;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    if(arr[0]>arr[1]&&arr[0]>arr[2])
    {
        if(arr[1]>arr[2])
        {
            m1=arr[0];
            m2=arr[1];
            m3=arr[2];
        }
        else
        {
            m1=arr[0];
            m2=arr[2];
            m3=arr[1];
        }
    }
    else if(arr[1]>arr[2])
    {
        m1=arr[1];
        m2=arr[2];
        m3=arr[0];
    }
    else
    {
        m1=arr[2];
        m2=arr[1];
        m3=arr[0];
    }
    for(i=3;i<n;i++)
    {
        if(arr[i]>m1)
            m1=arr[i];
        else if(arr[i]>m2)
            m2=arr[i];
        else if(arr[i]>m3)
            m3=arr[i];
    }
    cout<<m3;
    return 0;
}
