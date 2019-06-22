#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<=n/2;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<"Not Palindrome";
    else
        cout<<"Palindrome";
    return 0;
}
