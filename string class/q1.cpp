#include<bits/stdc++.h>
using namespace std;
int inte(string s,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            sum=sum*10+(s[i]-'0');
        else
            return -1;
    }
    return sum;
}
int main()
{
    int n,c;
    string s;
    cin>>s;
    n=s.length();
    c=inte(s,n);
    if(c==-1)
        cout<<"Not valid";
    else
        cout<<c;
    return 0;
}
