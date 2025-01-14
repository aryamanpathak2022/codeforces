#include<bits/stdc++.h>
using namespace std;




void solve()
{
    int n, x;
    cin >> n >> x;
    if (n % x) {
        cout << "-1\n";
        return;
    }
    vector<int> ans(n + 1);
    iota(ans.begin(), ans.end(), 0);
    ans[n] = 1;
    ans[1] = x;
    while (x < n)
        for (int i = x * 2; i <= n; i += x)
            if (n % i == 0) {
                ans[x] = i;
                x = i;
                break;
            }
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}