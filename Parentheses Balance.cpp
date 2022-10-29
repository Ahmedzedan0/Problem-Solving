#include <bits/stdc++.h>
using namespace std;

bool ArePair(char open, char close)
{
    if (open == '(' && close == ')') //()
        return true;
    else if (open == '{' && close == '}') //{}
        return true;
    else if (open == '[' && close == ']') //[]
        return true;
    return false;
}

bool AreBalanced(string exp) // 1 or 0 
{
    stack<char> S;
    int length = exp.length(); // exp = "({[kbjcw-4978527)))"
    
    for (int i = 0; i < length; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            S.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (S.empty() || !ArePair(S.top(), exp[i]) )
                return false;
            else
                S.pop();
        }
    }
    return S.empty() ? true : false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cases;
    cin >> cases;
    cin.ignore();
    while (cases--)
    {
        string expression;
        getline(cin, expression);
        if (AreBalanced(expression))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}