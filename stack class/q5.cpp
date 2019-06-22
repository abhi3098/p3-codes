#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(11);
    s.push(15);
    s.push(8);
    int min=INT_MAX;
    while(!s.empty())
    {
        if(s.top()<min)
            min=s.top();
        s.pop();
    }
    cout<<min;
    return 0;
}
