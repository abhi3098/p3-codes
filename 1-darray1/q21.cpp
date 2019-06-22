#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
            c++;
    }
    if(c%2==0)
        cout<<"0";
    else
        cout<<"1";
    return 0;
}
