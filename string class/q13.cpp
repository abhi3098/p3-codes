#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,n1,n2,i1=-1;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    n1=s1.length();
    n2=s2.length();
    j=0;
    for(i=0;i<n1;i++)
    {
        if(s1[i]==s2[j])
        {
            if(i1==-1)
                i1=i;
            j++;
        }
        else
        {
            if(j==n2&&i1!=-1)
            {
                break;
            }
            else
            {
                i1=-1;
                j=0;
            }
        }
    }
    if(i1!=-1)
        cout<<i1;
    else
        cout<<"Not found";
    return 0;
}
