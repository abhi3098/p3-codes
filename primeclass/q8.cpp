#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=INT_MIN,min=INT_MAX;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i+=2)
    {
        if(arr[i]>arr[i+1])
        {
            if(max<arr[i])
                max=arr[i];
            if(min>arr[i+1])
                min=arr[i+1];
        }
        else
        {
            if(max<arr[i+1])
                max=arr[i+1];
            if(min>arr[i])
                min=arr[i];
        }
    }
    if(n%2!=0)
    {
        if(arr[n-1]>max)
            max=arr[n-1];
        else if(arr[n-1]<min)
            min=arr[n-1];
    }
    cout<<max<<" "<<min;
    return 0;
}
