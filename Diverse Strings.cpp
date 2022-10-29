// ABCDEFGHIJKLMNOPQRSTUVWXYZ // s[i - 1] + 1
// 0123456789
/*                                  YYYY || NNNN
8
fced
xyz
r
dabcef
az
aa
bad
babc
*/

#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> s;
        sort(s.begin(), s.end());
        int len = s.length(), f = 1;

        for (int i = 1; i < len; i++) // we will not check tha last element
        {
            if (s[i] != s[i - 1] + 1)
                f = 0;
        }
        cout << (f ? "Yes" : "No") << "\n";
    }
}