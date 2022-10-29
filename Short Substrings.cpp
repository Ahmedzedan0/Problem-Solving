#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string x;
        cin >> x;
        for (int i = 0; i < x.size()-1; i = i + 2)
        {
            cout << x[i];
        }
        cout << x[x.size() - 1] << endl;
    }
}
