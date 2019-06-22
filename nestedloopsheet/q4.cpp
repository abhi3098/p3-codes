#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin>>n;
    cin>>k;
    int a[n],c=1,j;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(c==k)
        {
            c=1;
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
