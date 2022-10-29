#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p_steps = 0, q_steps = 0;
    cin >> n;
    int p[n], q[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    do
    {
        p_steps++;
    } while (prev_permutation(p, p + n));
    do
    {
        q_steps++;
    } while (prev_permutation(q, q + n));
    cout << abs(q_steps - p_steps);
    return 0;
}