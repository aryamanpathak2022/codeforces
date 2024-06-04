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
int countTrailingZeroes(int num) {
    int count = 0;
    while (num % 10 == 0 && num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Custom comparator function for sorting based on trailing zeroes
bool compare(int a, int b) {
    return countTrailingZeroes(a) < countTrailingZeroes(b);
}       
void solve()
{
    int n,m;
    cin >> n>>m;

    vi a(n);
    FORI(i,n)
    {
        cin >> a[i];
    }
    int count =0;
    FORI(i,n)
    {
        if(a[i]%10==0)
        {
            count++;
        }

    }
    // PUT MINI AS INFINITY 
    // int mini= 1000000000000000000000   ;
    int zeroes=0;
    vi b;
   
   
    
        FORI(i,n)
    {
        if(a[i]%10==0)
        {
           b.push_back(a[i]);
            
        }
    

    
    // cout<<mini;
    // cout<
    // // find number of zeroes in mini
    // sort b
    sort(b.begin(),b.end(),compare);
 
    }
     

    // count the number of zeroes in alternate eleemtns of b start from first postition

    FORI(i,b.size())
    {
        if((i+1)%2==0)
        {
            zeroes+=countTrailingZeroes(b[i]);
        }
    }


    // iterate through a and convert the number in it to string and concatenate them 
    string s="";
    FORI(i,n)
    {
        string temp=to_string(a[i]);
        s+=temp;
        }
        //find out zeroes in s and remove them starting  from last 
        // int i=0;
        // remove all the "0" from s

        // cout<<s;
        // cout<<endl; 
        FORI(i,s.length())
{
    if(s[i]=='0')
    {
        s.erase(i,1);
        i=i-2;
    }
    
}
        

//    print b vector
       



        // cout<<s<<endl;

        // // print zeroes
        // cout<<zeroes;
        // cout<<endl;
        // // cout<<s;
        // cout<<endl; 
        // cout<<i+1+zeroes;
        // check if i+1+zeroes is greater than m so print Sasha else print Anna
        if(s.length()+zeroes>=m+1)
        {
            cout<<"Sasha"<<endl;
        }
        else
        {
            cout<<"Anna"<<endl;
        }
        // FORI(i,b.size())
        // {
        //     cout<<b[i]<<" ";
        // }
        
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