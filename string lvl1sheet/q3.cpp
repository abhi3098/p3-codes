#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,c=0,len;
    string s;
    getline(cin,s);
    len=s.length();
    while(i<len)
    {
        if(s[i]==32&&s[i-1]!=32)
            c++;
        i++;
    }
    if(s[i-1]!=32)
        c++;
    cout<<c;
    return 0;
}
