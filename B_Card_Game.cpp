#include <bits/stdc++.h>
using namespace std;

int solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    
    int ans = 0;
    if (a1 > b1 && a2 > b2) 
    {
        ans += 2;
    }
    if (a1 > b2 && a2 > b1) 
    {
        ans += 2;
    }
    if (a1 > b2 && a2 == b1) 
    {
        ans += 2;
    }
    if (a1 == b2 && a2 > b1)
     {
        ans += 2;
    }
    if(a1 == b1 && a2 > b2) {
        ans += 2;
    }
    if(a1 > b1 && a2 == b2)
     {
        ans += 2;
    }

    cout << ans << endl;


    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        
        solve();
    }
    return 0;
}
