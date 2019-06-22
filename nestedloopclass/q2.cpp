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
            if(arr[j]>arr[i])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    c1=1;
                    break;
                }
            }
        }
        if(c1==0&&c==0)
            break;
    }
    if(c1==0&&c==0)
        cout<<arr[i];
    else
        cout<<"not found";
    return 0;
}
