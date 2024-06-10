#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define PI 3.14159265
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(i, n) for(int i=n-1;i>=0;i--)
#define EACH(x, a) for (auto &x : a)
#define gcd(x, y) __gcd(x, y)
#define lcm(x,y) x*y/gcd(x,y)
#define CEIL(a, b) (a + b - 1) / b
#define FLOOR(a, b) a / b
long long power(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = power(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
long long POWM(long long a, long long b, long long m=MOD)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
#define SORT(a) sort(a.begin(), a.end())
#define REVERSE(a) reverse(a.begin(), a.end())
#define pt(a) cout << a << endl;
#define prnt(a) cout << a << " ";
#define pt_(a) EACH(i,a) {cout << i << " ";} cout<<endl;
typedef vector<ll> vi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef unordered_set<int> unset;
typedef unordered_map<int, int> unmap;
#define pb push_back
#define int long long
#define sum(a) accumulate(all(a),0LL)
//*NOTES
//* n & 1 is 1 then odd, else even
//* 1<<n gives the number with only nth bit set
//* n | (1<<n) gives the number with nth bit set
//* n & (n-1) removes the last set bit from LSB
//* n & (-n) gives the last set bit from LSB
//* n & (n+1)  clears all trailing ONES
//* n | (n+1)  sets the last cleared bit 0011 0101 -> 0011 0111
// int firstSetBit(int n) //! returns the first bit set in a number
// {
//     return __builtin_ffs(n);
// }
// int firstUnsetBit(int n)
// {
//     return (firstSetBit(~n));
// }
// int totalsetBit(int n)
// {
//     return __builtin_popcountll(n);
// }
// bool isPowerOfTwo(unsigned int n)
// {
//     return __has_single_bit(n);
// }
// bool is_set(unsigned int number, int x)
// {
//     return (number >> x) & 1;
// }
// bool is_integer(float k)
// {
//   return floor(k) == k;
// }
// *trailing zeros __builtin_ctzll(n)
//*leading zeros __builtin_clzll(n) //n != 0
//*a+b=(a^b)+2(a&b) = (a|b) + (a&b)
//*memset(dp,0,sizeof(dp)); //?sets the 2d array to all 0
//__has_single_bit(n) //? returns true if n is a power of 2
// __builtin_clz(n) //? returns the number of leading 0-bits in n, starting at the most significant bit position. If n is 0, the result is undefined.
// __builtin_ctz(n) //? returns the number of trailing 0-bits in n, starting at the least significant bit position. If n is 0, the result is undefined.
// __builtin_popcount(n) //? returns the number of 1-bits in n.
// __builtin_parity(n) //? returns the number of 1-bits in n modulo 2.
// bit_ceil / bit_floor //!round up/down to the next power of two
// class Compare { //*Custom Comparator 
// public:
//     bool operator()(ii below, ii above)
//     {
//         if (below.second > above.second) {
//             return true;
//         }
//         else if (below.second == above.second
//                  && below.first < above.first) {
//             return true;
//         }
//         return false;
//     }
// };

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    vector<int> curr(3, 0);
    for (int i = 0; i < 3; i++) {
        cin >> curr[i];
    }
    
    vector<int> prc(3, 0);
    for (int i = 0; i < 3; i++) {
        cin >> prc[i];
    }
    
    int mny;
    cin >> mny;
    
    vector<int> cnt(3, 0);
    for (char c : s) {
        if (c == 'B') {
            cnt[0]++;
        } else if (c == 'S') {
            cnt[1]++;
        } else if (c == 'C') {
            cnt[2]++;
        }
    }
    // print cnt
    // FORI(i,3)
    // {
    //     cout<<cnt[i]<<" ";
    // }
    
    int l = 0;
    int r = 1e13;
    int ans = 0;
    // cout<<mny<<endl;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        // cout<<mid<<endl;
        long long cost = max(0LL, static_cast<long long>(cnt[0] * mid - curr[0])) * prc[0] +
                         max(0LL, static_cast<long long>(cnt[1] * mid - curr[1])) * prc[1] +
                         max(0LL, static_cast<long long>(cnt[2] * mid - curr[2])) * prc[2];
        if(cost==mny)
        {
            cout<<mid<<endl;
            return;
        }
        if (cost < mny) {
            
            l = mid+1;
            ans = mid;
        } else {
            r = mid-1;
        }
        
       
    }
    
    
    cout << ans<< endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   
    while (t--)
    {
        solve();
    }
    return 0;
}