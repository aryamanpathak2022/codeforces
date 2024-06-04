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
// int extended_gcd(int a, int b, int& x, int& y) {
//     if (a == 0) {
//         x = 0;
//         y = 1;
//         return b;
//     }
//     int x1, y1;
//     int gcd = extended_gcd(b % a, a, x1, y1);
//     x = y1 - (b / a) * x1;
//     y = x1;
//     return gcd;
// }

// // Function to find the modular inverse of c modulo m
// int mod_inverse(int c, int m) {
//     int x, y;
//     int gcd = extended_gcd(c, m, x, y);
//     if (gcd != 1) {
//         throw runtime_error("Modular inverse does not exist");
//     }
//     // Ensure x is positive
//     return (x % m + m) % m;
// }

void solve()
{
    int n,m;
    cin >> n>>m;
    // input vector of length n
    vi a(n);
    // take input
    FORI(i,n)
    {
        cin >> a[i];
    }
    // take input for a string
    string s;
    cin >> s;
    int l=0;
    int r=n-1;
    vi b(n);
    // find the product of vector a
    int prod=1;
    // FORI(i,n)
    // {
    //     prod =((prod%m)*(a[i]%m)) % m;
        
    // }
    // cout<<prod<<" ";
    // iterate over string 
    FORI(i,s.length()-1)
    {
      
        if(s[i]=='R')
        {
           
            r--;
            
        }
        
        else if(s[i]=='L')
        {
            
            l++;
           
        }
        
        // print the product
        // print product value 

            // cout<<"prod value is "<<prod<<" ";
            // print l and r values
            // cout<<"l value is "<<l<<" r value is "<<r<<endl;
        
       
    }
    
    b[0]=a[l]%m;
    for(int i=1; i<n; i++)
    {
       
        
        
         if(s[n-i-1]=='R')
        {
            r++;
           b[i]=((a[r])*(b[i-1]))%m;
            
            // cout<<b[i]<<" ";
            // cout<<"hello";
            
        }
        
        else if(s[n-i-1]=='L')
        {

              l--;
            b[i]=((a[l])*(b[i-1]))%m;
          
            // cout<<b[i]<<" ";
            // cout<<"helloaa";
            
            
        }

    }
    // print reverse of b
    for(int i=n-1; i>=0; i--)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

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