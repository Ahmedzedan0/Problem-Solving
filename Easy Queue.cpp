#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    queue<int>q;
    int n,x,typ;
    cin>>n;
    while(n--)
    {
        cin>>typ;
        if(typ==1)
        {
            cin>>x;
            q.push(x);
        }
        else if(typ==2)
        {
            if(!q.empty()) q.pop();
        }
        else 
        {
            if(!q.empty()) cout<<q.front()<<"\n";
            else cout<<"Empty!\n";
        }
    }
}