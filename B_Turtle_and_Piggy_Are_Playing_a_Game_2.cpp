#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> seq(n);

    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    if (n == 1) {
        cout << seq[0] << endl;
        return;
    }

    sort(seq.begin(), seq.end());

    if (n % 2 == 1) { 
        cout << seq[n / 2] << endl;
    } else { 
        cout << seq[(n / 2)] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
