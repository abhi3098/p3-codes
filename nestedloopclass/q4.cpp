#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,c=0,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
        cin>>arr1[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(pow(arr[i],arr1[j])>pow(arr1[j],arr[i]))
                c++;
        }
    }
    cout<<c;
    return 0;
}
