#include<bits/stdc++.h>

using namespace std;
#define int long long
int solve()
{
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans=ans+(int)(s[i]-'0');

    }
    cout<<ans<<endl;
    return 0;
}

int32_t main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}