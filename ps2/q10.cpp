#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,j=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            b=a-(3*j);
            j++;
        }
        else
        {
            a=pow((i+1),2)+i;
        }
    }
    if(n%2==0)
        cout<<b;
    else
        cout<<a;
    return 0;
}
