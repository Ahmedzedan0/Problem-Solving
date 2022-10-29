#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>pos,neg,zero;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0) pos.push_back(x);
        else if(x<0) neg.push_back(x);
        else zero.push_back(x);
    }
    if(pos.empty())
    {   // negative -1 
        // -3 -2 
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2 ==0)  //even -> pos
    {
        zero.push_back(neg.back()); // 0 
        neg.pop_back();
    }

    cout<<neg.size()<<' ';
    for(int i : neg) cout<<i<<' ';
    cout << "\n";
    cout<<pos.size()<<" ";
    for(int i : pos) cout<<i<<' '; // pos:{1,2,3,5,6}
    cout << "\n";
    cout<<zero.size()<<" ";
    for(int i : zero) cout<<i<<' ';
    cout << "\n";
    return 0;
}