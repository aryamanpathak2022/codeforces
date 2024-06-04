#include <iostream>
#include <bits/stdc++.h>
#define ll int
#define MOD 1000000007
#define ull unsigned long long
#define mxx 1e18 - 1
using namespace std;
 
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
 
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    map<ll, set<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]].insert(i);
    }
    for (ll i = 0; i < n; i++)
    {
        vector<ll> pre;
        for (ll j = 1; j <= 3; j++)
        {
            pre.push_back(v[i] ^ j);
        }
        sort(pre.begin(), pre.end());
        for (ll j = 0; j < pre.size(); j++)
        {
            ll val = pre[j];
            if (val < v[i] && mp[val].size() > 0)
            {
                ll ind = (*mp[val].begin());
                mp[v[i]].erase(i);
                mp[val].erase(ind);
                mp[v[i]].insert(ind);
                mp[val].insert(i);
                swap(v[i], v[ind]);
                break;
            }
        }
        mp[v[i]].erase(i);
    }
    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}



int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}