#include <bits/stdc++.h>
using namespace std;

/*
1.Give candies candies to the first child of the line.

2.If this child still haven't got enough candies,
 then the child goes to the end of the line, else the child go home.

3.Repeat the first two steps while the line is not empty.
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    deque<int> dq, idx;
    int n, candies, childs, ans = 0;
    cin >> n >> candies;

    for (int i = 0; i < n; i++) // fill the dq
    {
        cin >> childs;
        dq.push_back(childs);
        idx.push_back(i + 1);
    }

    while (dq.size() > 1)
    {
        if (dq.front() <= candies)
        {
            dq.pop_front();
            idx.pop_front();
        }

        else
        {
            idx.push_back(idx.front());
            idx.pop_front();
            dq.push_back(dq.front() - candies);
            dq.pop_front();
        }
    }
    cout << idx.front() << '\n';
    return 0;
}
