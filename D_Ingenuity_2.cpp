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

void solve()
{
  int n;
  cin>>n;
  string dir;
  cin>>dir;
  vi dir_values(4,0);
  FORI(i,n)
  {
    if(dir[i]=='N')
    {
      dir_values[0]++;
    }
    else if(dir[i]=='S')
    {
      dir_values[1]++;
    }
    else if(dir[i]=='E')
    {
      dir_values[2]++;
    }
    else
    {
      dir_values[3]++;
    }

  }
//   print dir_values
// FORI(i,4)
// {
//     cout<<dir_values[i]<<" ";
// }
  if(abs((dir_values[0]-dir_values[1]))%2!=0 ||  abs(dir_values[2]-dir_values[3])%2!=0)
  {
    cout<<"NO"<<endl;
  }
  else if(n==2 && (dir_values[0]-dir_values[1])==0 &&(dir_values[2]-dir_values[3])==0)
  {
    cout<<"NO"<<endl;
  }
  else
  {
    // cout<<"YES"<<endl;
//    ITERATE OVER THE  STRING DIR AND AT ODD  N,S,E,W PRINT H and print R at even
    int n1,s,e,w;
    n1=0;
    s=0;
    e=0;
    w=0;
    // if(dir_values[0]==1 && dir_values[1]==1 && dir_values[2]==1 &&dir_values[3]==1)
    // {
    //     // cout<<"YES"<<endl;
    //     cout<<"HHRR"<<endl;
    //     return;
    // }

    FORI(i,n)
    {
      if(dir[i]=='N')
      {
        if(n1%2==0)
        {
            cout<<"H";
            n1++;
            }
            else
            {
            cout<<"R";
            n1++;
        }
        
      }
      else if(dir[i]=='S')
      {
        
        if(s%2==0)
        {
            cout<<"H";
            s++;
            }
            else
            {
            cout<<"R";
            s++;
        }
      }
      else if(dir[i]=='E')
      {
        
        if(e%2==0)
        {
            cout<<"R";
            e++;
            }
            else
            {
            cout<<"H";
            e++;
        }
      }
      else if(dir[i]=='W')
      {
        
        if(w%2==0)
        {
            cout<<"R";
            w++;
            }
            else
            {
            cout<<"H";
            w++;
        }
      }
    
  

}
cout<<endl;
  }
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