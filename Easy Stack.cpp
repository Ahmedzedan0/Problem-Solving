#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    stack<int> st;
    int n, x, typ;
    cin >> n;
    while (n--)
    {
        cin >> typ;
        if (typ == 1)
        {
            cin >> x;
            st.push(x);
        }
        else if (typ == 2)
        {
            if (!st.empty())
                st.pop();
        }
        else // else if (typ == 3)
        {
            if (st.empty())
                cout << "Empty!\n";
            else
                cout << st.top() << "\n";
        }
    }
}