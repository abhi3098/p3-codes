#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    long long arr[n],sum=0;
    for(i=0;i<n-1;i++)
        cin>>arr[i];
    sum=(n*(n+1))/2;
    for(i=0;i<n-1;i++)
        sum-=arr[i];
    cout<<sum;
    return 0;
}
