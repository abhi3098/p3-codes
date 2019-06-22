#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,i1,i2,j=-1,c=0,c1=INT_MIN;
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            c++;
            if(j==-1)
                j=i;
        }
        else
        {
            if(c>c1)
            {
                c1=c;
                i1=j;
                i2=i-1;
                c=0;
                j=-1;
            }
            c=0;
            j=-1;
        }
    }
    for(i=i1;i<=i2;i++)
        cout<<s[i];
    return 0;
}
