#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=INT_MIN;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            cout<<max<<endl;
        }
    }
    return 0;
}
