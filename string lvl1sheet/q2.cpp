#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            c++;
    }
    cout<<c;
    return 0;
}
