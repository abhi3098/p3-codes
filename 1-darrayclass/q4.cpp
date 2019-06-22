#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,gm=INT_MIN,lm=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        lm+=arr[i];
        if(gm<lm)
            gm=lm;
        if(lm<0)
            lm=0;
    }
    cout<<gm;
    return 0;
}
