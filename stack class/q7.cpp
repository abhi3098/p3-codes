#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1,s2;
    s1.push(10);
    s1.push(12);
    s1.push(15);
    s1.push(11);
    while(!s1.empty())
    {
        if(s1.top()%2!=0)
            s2.push(s1.top());
        s1.pop();
    }
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}
