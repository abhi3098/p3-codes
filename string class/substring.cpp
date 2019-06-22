#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c;
    string s;
    cin>>s;
    n=s.length();
    char sub[n+1];
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            sub[c]=s[j];
            c++;
            sub[c]='\0';
            cout<<sub<<endl;
        }
    }
    return 0;
}
