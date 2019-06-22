#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n],c=1;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
            c++;
        else
        {
            cout<<a[i-1]<<":"<<c<<endl;
            c=1;
        }
    }
    cout<<a[i-1]<<":"<<c<<endl;
    return 0;
}
