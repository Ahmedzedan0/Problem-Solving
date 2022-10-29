#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n+1),mx(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mx[i] = max(mx[i-1],v[i]);
        }
        for (int i = n;i<=n;--i)
        {
            int end = i;
            while(i>0 && v[i] != mx[i])
            {
                i--;
            }
            for(int j = i;j<=end;++j)
            {
                cout << v[j] << " ";
            }
        } cout<<'\n';
    }
}