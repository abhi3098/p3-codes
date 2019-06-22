#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,c1=0,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++)
    {
        c=0;
        c1=0;
        for(j=i-1;j>=0;--j)
        {
            c+=arr[j];
        }
        for(j=i+1;j<n;j++)
            c1+=arr[j];
        if(c1==c)
            break;
    }
    if(c1==c)
        cout<<arr[i];
    else
        cout<<"not found";
    return 0;
}
