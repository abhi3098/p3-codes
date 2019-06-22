#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,n1=0,n2=0,c=0;
    string s;
    cin>>s;
    n=s.length();
    float f;
    for(i=0;i<n;i++)
    {
        if(s[i]=='.')
            break;
        n1=n1*10+(s[i]-'0');
    }
    cout<<n1<<" ";
    i++;
    for(;i<n;i++)
    {
        n2=n2*10+(s[i]-'0');
        c++;
    }
    cout<<n2<<" ";
    cout<<c<<" ";
    f=(float)(n1+(n2/pow(10,c)));
    cout<<f;
    return 0;
}
