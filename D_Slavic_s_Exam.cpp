#include <bits/stdc++.h>
using namespace std;

int solve() {
    string s;
    string t;
    cin >> s >> t;
    int t_pointer=0;
    vector<char> ans;

    for(int i=0;i<s.length();i++)
    {
        if((t_pointer<t.length() && s[i]==t[t_pointer]) || (t_pointer<t.length() && s[i]=='?'))
        {
            ans.push_back(t[t_pointer]);
            t_pointer++;
            

        }
        else if(s[i]=='?')
        {
            ans.push_back('a');
        }
        else
        {
            ans.push_back(s[i]);

        }



    }
    if(t_pointer==t.length())
    {
        cout << "YES" << endl;
        for (auto c : ans) {
            cout << c;
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
