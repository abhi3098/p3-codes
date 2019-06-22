#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    int arr[n],arr1[n];
    float a,s;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    s=((float)(arr[0]/arr1[0]))*100;
    for(i=1;i<n;i++)
    {
        a=((float)(arr[i]/arr1[i]))*100;
        if(s<a)
            s=a;
    }
    cout<<s;
    return 0;
}
