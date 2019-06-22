#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<=n/2;i++)
    {
        if(s[i]!=s[n-1-i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<"Not palindrome";
    else
        cout<<"Palindrome";
    return 0;
}
