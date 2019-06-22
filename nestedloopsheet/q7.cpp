#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[0]<<endl;
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
            cout<<a[i]<<endl;
    }
    return 0;
}
