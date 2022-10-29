#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    deque<int> dq;
    int n,x;
    cin >> n;
    bool turn = false; // flag
    while(n--) //15
    {
        string typ; // back - front -reverse - tofront - push_back 
        cin >> typ;
        if(turn) // if true
        {
            if (typ.front()=='b')
                typ.front() = 'f';
            else if (typ.front() == 'f')
                typ.front() = 'b';
            else if (typ.front() == 'p')
                typ.front() = 't';
            else if (typ.front() == 't')
                typ.front() = 'p';
        }
        // back - front -reverse - tofront - push_back
        if(typ.front()=='b') // access first chr in string
        {
            if(!dq.empty())
            {
                cout << dq.back() << "\n"; // 22 
                dq.pop_back();  // remove 22
            }
            else
            {
                cout << "No job for Ada?\n";
            }
        }

        else if (typ.front() == 'f')
        {
            if (!dq.empty())
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else
            {
                cout << "No job for Ada?\n";
            }
        }


        else if (typ.front() == 'r')
        {
            turn = !turn;
        }

        else if (typ.front() == 'p')
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (typ.front() == 't')
        {
            cin >> x;
            dq.push_front(x);
        }

    }
}