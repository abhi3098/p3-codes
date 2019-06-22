#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0,n1,j,n2,i1,i2;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    n1=s1.length();
    n2=s2.length();
    for(i=0;i<n2-1;i++)
    {
        for(j=n1-1;j>=0;j--)
        {
            if(s1[j]==s2[i])
            {
                i1=j;
                break;
            }
        }
        for(j=0;j<n1;j++)
        {
            if(s1[j]==s2[i])
            {
                i2=j;
                break;
            }
        }
        if(i1>i2)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<"wrong";
    else
        cout<<"Right";
    return 0;
}
