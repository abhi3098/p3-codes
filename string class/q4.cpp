#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,n,i;
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<"wrong";
    else
        cout<<"right";
    return 0;
}
