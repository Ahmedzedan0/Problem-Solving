#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    if (size<26)
    {
        cout<<"NO";
        return 0;
    }

    string s;
    cin>>s;
    

    for(int i=0;i<size;i++)
    {
        s[i] = tolower(s[i]);
    }

    sort(s.begin(), s.end());
    
    int counter = 0;
    
    for(int i=1;i<size;i++)
    {
        if(s[i] != s[i+1])
        {
            counter++;
        }

    }
    if(counter == 25)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}