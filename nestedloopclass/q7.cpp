#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,i,n,su=INT_MAX;
    cin>>n;
    int d,arr[n];
    cin>>d;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n-d;i++)
    {
        s=abs(arr[i]-arr[i+d-1]);
        if(su>s)
            su=s;
    }
    cout<<su;
    return 0;
}
