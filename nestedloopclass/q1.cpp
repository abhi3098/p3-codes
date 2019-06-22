#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                c++;
        }
    }
    cout<<c;
    return 0;
}
