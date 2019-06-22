#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,t;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            for(j=i;j>0;j--)
            {
                if(arr[j-1]>0)
                {
                    t=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=t;
                }
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
