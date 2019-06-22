#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1,s2;
    //stack<int> s2;
    int f=0;
    s1.push(10);
    s1.push(5);
    s1.push(9);
    s2.push(10);
    s2.push(6);
    s2.push(9);
    while(!s1.empty()&&!s2.empty())
    {
        if(s1.top()!=s2.top())
        {
            f=1;
            break;
        }
        s1.pop();
        s2.pop();
    }
    if(f==1)
        cout<<"Not equal";
    else
        cout<<"Equal";
    return 0;
}
