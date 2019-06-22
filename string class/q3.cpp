#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,n1=0,n2=0,c=0,n3=0;
    string s;
    cin>>s;
    n=s.length();
    double f;
    for(i=0;i<n;i++)
    {
        if(s[i]=='.')
            break;
        n1=n1*10+(s[i]-'0');
    }
    i++;
    for(;i<n;i++)
    {
        if(s[i]=='e')
            break;
        n2=n2*10+(s[i]-'0');
        c++;
    }
    i++;
    for(;i<n;i++)
    {
        n3=n3*10+(s[i]-'0');
    }
    f=(double)(n1+(n2/pow(10,c)));
    f=f*pow(10,n3);
    cout<<f;
    return 0;
}
