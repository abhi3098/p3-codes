#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,i,c=0,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>f;
    for(i=0;i<n;i++)
    {
        if(arr[i]==f)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<i;
    else
        cout<<"not present";
    return 0;
}
