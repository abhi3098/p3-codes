#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c1='A',c2='Z';
    int i;
    cout<<c1<<c2;
    for(i=1;i<=15;i++)
    {
        c1+=2;
        c2-=1;
        cout<<","<<c1<<c2;
    }
    return 0;
}
