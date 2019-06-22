#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c1=2,c2;
    cin>>n;
    cout<<n<<endl;
    c2=n+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c1;j++)
            cout<<c2;
        cout<<endl;
        c2++;
        c1++;
    }
    c2-=2;
    c1-=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c1;j++)
            cout<<c2;
        cout<<endl;
        c1--;
        c2--;
    }
    return 0;
}
