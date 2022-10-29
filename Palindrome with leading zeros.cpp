#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string str)
{
    while(str.back() == '0')
        str.pop_back();
    
    string ans = str;
    reverse(ans.begin(),ans.end());
    return ans==str ? "Yes" : "No";

}
int main()
{
    string str;
    cin>>str;
    cout<<isPalindrome(str)<<"\n";
}