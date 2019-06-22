#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,max=INT_MIN;
    while(1)
    {
        cin>>a;
        if(a<=0)
            break;
        if(max<a)
            max=a;
    }
    cout<<max;
    return 0;
}
