#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,n1,n2,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>n1>>n2;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=n1&&arr[i]<=n2)
            c++;
    }
    cout<<c;
    return 0;
}
