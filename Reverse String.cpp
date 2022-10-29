#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {   
        string s,t,ans="NO";
        cin>>s>>t;
        bool flag = true;
        for (int i = 0; flag && i < s.size(); i++)
        {
            if(s[i]==t[0])
            {
                for (int j = i;  j < s.size(); j++)
                {   
                    // substr (start, length)
                    string temp = s.substr(i, j-i+1); // i,1 -> i,2 -> i,3

                    int k = j-1;
                    while(k>=0 && temp.size() < t.size())
                    {
                        temp += s[k--];
                        
                    }

                    if(temp==t)
                    {
                        ans="YES";
                        flag = false;
                        break;
                    }
                }
            }
        }
        cout << ans<<"\n";
    }
}
