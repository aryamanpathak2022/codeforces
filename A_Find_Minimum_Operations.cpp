#include <bits/stdc++.h>
using namespace std;

#define int long long

// Function to calculate k^p (k raised to power p) using integer arithmetic
int integer_pow(int k, int p) {
    int result = 1;
    int base = k;
    
    while (p > 0) {
        // If p is odd, multiply the result by the base
        if (p % 2 == 1) {
            if (result > LLONG_MAX / base) return LLONG_MAX; // Overflow check
            result *= base;
        }

        // Square the base for the next iteration
        if (p > 1) { // Skip squaring when p == 1, because it will be the last step
            if (base > LLONG_MAX / base) return LLONG_MAX; // Overflow check for squaring
            base *= base;
        }

        // Reduce p by half (equivalent to p //= 2)
        p /= 2;
    }

    return result;
}



void solve() {
    int n, k;
    cin >> n >> k;
    int x = 0;

    if (n < k) {
        cout << n << endl;
        return;
    }
    if (n == k) {
        cout << 1 << endl;
        return;
    }
    if (k == 1) {
        cout << n << endl;
        return;
    }

    int max_pow = 0;
    while (n > 0) {
        // Calculate k^max_pow using integer arithmetic
        int power_val = integer_pow(k, max_pow);

        if (power_val == n) {
            x++;
            break;
        }

        if (power_val > n) {
            // Reduce max_pow by 1 because the current power exceeds n
            max_pow--;

            // Subtract the largest valid power of k from n
            int reminder=n/integer_pow(k, max_pow);
            n -= reminder*integer_pow(k, max_pow);


            // Increment the count and reset max_pow for the next iteration
            x=x+reminder;
            max_pow = 0;
        }

        max_pow++;
    }

    cout << x << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
