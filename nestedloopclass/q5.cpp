#include<bits/stdc++.h>
using namespace std;
bool cal(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(j!=i&&i!=k&&k!=j)
                {
                    if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
                        return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int i,n;
    bool c;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    c=cal(arr,n);
    cout<<c;
    return 0;
}
