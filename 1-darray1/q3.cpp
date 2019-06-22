#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m=0,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        m+=arr[i];
        c++;
    }
    m/=c;
    c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>m)
            c++;
    }
    cout<<c;
    return 0;
}
