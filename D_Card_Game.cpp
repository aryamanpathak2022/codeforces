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

int solve()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    
    // Vector of strings
    vector<string> s;
    int m = 2 * n;
    
    // List of strings as input like 3C 9S 4C 6D 3S 7S
    while (m-- > 0) {
        string input;
        cin >> input;
        s.push_back(input);
    }
    
  
    // make 4 string vectors name s,c,h,d
    vector<string> s1, c1, h1, d1;
    for (int i = 0; i < 2*n; i++) {
        if (s[i][1] == 'C') {
            c1.push_back(s[i]);
        }
        else if (s[i][1] == 'S') {
            s1.push_back(s[i]);
        }
        else if (s[i][1] == 'H') {
            h1.push_back(s[i]);
        }
        else if (s[i][1] == 'D') {
            d1.push_back(s[i]);
        }
    }
    // CHECK THE LENGTH OF EACH ARRAY AND DIFFERENT CONDITIONS FOR DIFFERENT c values\

     if (c == 'C') {
        int temp=0;
        int s_size=0;
        int h_size=0;
        int d_size=0;

        if(s1.size()%2!=0)
        {
            temp+=s1.size();
            s_size=s1.size();
        }
        if(h1.size()%2!=0)
        {
            temp+=h1.size();
            h_size=h1.size();


        }
        if(d1.size()%2!=0)
        {
            temp+=d1.size();
            d_size=d1.size();

        }
  
        if((temp+c1.size())%2!=0 ||  (c1.size()==0 &&temp!=0))
        {
            // cout<<temp+c1.size();
            cout<<"IMPOSSIBLE";
            cout<<endl;
            std::cout << "/* message */" << endl;
            return 0;
        }
        else{
            // sort all the 4 vectors of strings
            sort(s1.begin(), s1.end());
            sort(c1.begin(), c1.end());
            sort(h1.begin(), h1.end());
            sort(d1.begin(), d1.end());
            // print pair from each vector like "3C 4C" and if the size of vector is not even then makee the pair from c1 so print c1 pairs at last
           
            for (int i = 0; i < s1.size() && s1.size()>1; i=i+2) {
                cout << s1[i] << " " << s1[i+1] << " ";
                cout << endl;
            }
           

            for (int i = 0; i < h1.size()&& h1.size()>1 ; i=i+2) {
                cout << h1[i] << " " << h1[i+1] << " ";
                cout << endl;
            }
         
            // d
            for (int i = 0; i < d1.size() && d1.size()>1; i=i+2) {
                cout << d1[i] << " " << d1[i+1] << " ";
                cout << endl;
            }
          
            int temp2=0;
            for (int i = 0; i < c1.size()-temp; i=i+2) {
                cout << c1[i] << " " << c1[i+1] << " ";
                cout << endl;
                temp2=i+2;
            }
          
            
            if(s_size>0)
            {
                cout << s1[s_size-1] << " " << c1[temp2++] << " ";
                cout << endl;
            }
            if(h_size>0)
            {
                cout << h1[h_size-1] << " " << c1[temp2++] << " ";
                cout << endl;
            }
            if(d_size>0)
            {
                cout << d1[d_size-1] << " " << c1[temp2++] << " ";
                cout << endl;
            }




            
        }

     

           
                    }
                    //SIMILARY LIKE AOVE IF FOR OTHER ELSES
        else if (c == 'S') {
            
            int temp=0;
             int c_size=0;
        int h_size=0;
        int d_size=0;

            if(h1.size()%2!=0)
        {
            temp+=h1.size();
            h_size=h1.size();

        }
        if(d1.size()%2!=0)
        {
            temp+=d1.size();
            d_size=d1.size();
        }
           if(c1.size()%2!=0)
        {
            temp+=c1.size();
            c_size=c1.size();
        }
        //print all siizes
//         cout<<h1.size()<<" "<<d1.size()<<" "<<c1.size()<<" "<<s1.size()<<endl;
//   cout<<temp;
         if((temp+s1.size())%2!=0 ||  (s1.size()==0 &&temp!=0))
        {
            // cout<<(temp+s1.size());
            cout<<"IMPOSSIBLE";

                cout<<endl;
            return 0;
        } 
        else{
            // sort all the 4 vectors of strings
            sort(s1.begin(), s1.end());
            sort(c1.begin(), c1.end());
            sort(h1.begin(), h1.end());
            sort(d1.begin(), d1.end());
            // print pair from each vector like "3C 4C" and if the size of vector is not even then makee the pair from c1 so print c1 pairs at last
           
            for (int i = 0; i < d1.size() && d1.size()>1; i=i+2) {
                cout << d1[i] << " " << d1[i+1] << " ";
                cout << endl;
            }
           

            for (int i = 0; i < c1.size()&& c1.size()>1 ; i=i+2) {
                cout << c1[i] << " " << c1[i+1] << " ";
                cout << endl;
            }
         
            // d
            for (int i = 0; i < h1.size() && h1.size()>1; i=i+2) {
                cout << h1[i] << " " << h1[i+1] << " ";
                cout << endl;
            }
          
            int temp2=0;
            for (int i = 0; i < s1.size()-temp; i=i+2) {
                cout << s1[i] << " " << s1[i+1] << " ";
                cout << endl;
                temp2=i+2;
            }
          
            
            if(c_size>0)
            {
                cout << c1[c_size-1] << " " << s1[temp2++] << " ";
                cout << endl;
            }
            if(h_size>0)
            {
                cout << h1[h_size-1] << " " << s1[temp2++] << " ";
                cout << endl;
            }
            if(d_size>0)
            {
                cout << d1[d_size-1] << " " << s1[temp2++] << " ";
                cout << endl;
        }

        // print s1
        // for (int i = 0; i < s1.size(); i++) {
        //     cout << s1[i] << " ";
        // }
        
        }}
        else if (c == 'H') {
                int temp=0;
                 int s_size=0;
        int c_size=0;
        int d_size=0;

            if(s1.size()%2!=0)
        {
            temp+=s1.size();
            s_size=s1.size();

        }
        if(d1.size()%2!=0)
        {
            temp+=d1.size();
            d_size=d1.size();
        }
           if(c1.size()%2!=0)
        {
            temp+=c1.size();
            c_size=c1.size();
        }

//print
// cout<<h1.size()<<" "<<d1.size()<<" "<<c1.size()<<" "<<s1.size()<<endl;
//     cout<<temp;
         if((temp+h1.size())%2!=0 ||  (h1.size()==0 &&temp!=0)){
        // {cout<<temp+h1.size();

            cout<<"IMPOSSIBLE";
            cout<<endl;
            return 0;
        }
        else{
            // sort all the 4 vectors of strings
            sort(s1.begin(), s1.end());
            sort(c1.begin(), c1.end());
            sort(h1.begin(), h1.end());
            sort(d1.begin(), d1.end());
            // print pair from each vector like "3C 4C" and if the size of vector is not even then makee the pair from c1 so print c1 pairs at last
           
            for (int i = 0; i <s1.size() &&s1.size()>1; i=i+2) {
                cout <<s1[i] << " " <<s1[i+1] << " ";
                cout << endl;
            }
           

            for (int i = 0; i < c1.size()&& c1.size()>1 ; i=i+2) {
                cout << c1[i] << " " << c1[i+1] << " ";
                cout << endl;
            }
         
            // d
            for (int i = 0; i < d1.size() && d1.size()>1; i=i+2) {
                cout << d1[i] << " " << d1[i+1] << " ";
                cout << endl;
            }
          
            int temp2=0;
            for (int i = 0; i < h1.size()-temp; i=i+2) {
                cout << h1[i] << " " << h1[i+1] << " ";
                cout << endl;
                temp2=i+2;
            }
          
            
            if(s1.size()>0)
            {
                cout << s1[h1.size()-1] << " " << h1[temp2++] << " ";
                cout << endl;
            }
            if(c1.size()>0)
            {
                cout << c1[c1.size()-1] << " " << h1[temp2++] << " ";
                cout << endl;
            }
            if(d1.size()>0)
            {
                cout << d1[d1.size()-1] << " " << h1[temp2++] << " ";
                cout << endl;

        }
            
                    }
        }
        else if (c == 'D') {

                int temp=0;
                 int s_size=0;
        int h_size=0;
        int c_size=0;

            if(h1.size()%2!=0)
        {
            temp+=h1.size();
            h_size=h1.size();

        }
        if(s1.size()%2!=0)
        {
            temp+=s1.size();
            s_size=s1.size();
        }
           if(c1.size()%2!=0)
        {
            temp+=c1.size();

            c_size=c1.size();
        }

         if((temp+d1.size())%2!=0 || (d1.size()==0 &&temp!=0)  )
        {
            // print s vector
            
            // cout<<d1.size();
            cout<<"IMPOSSIBLE";
                cout<<endl;
            return 0;
        }
        else{
            // sort all the 4 vectors of strings
            sort(s1.begin(), s1.end());
            sort(c1.begin(), c1.end());
            sort(h1.begin(), h1.end());
            sort(d1.begin(), d1.end());
            // print pair from each vector like "3C 4C" and if the size of vector is not even then makee the pair from c1 so print c1 pairs at last
           
            for (int i = 0; i < s1.size() && s1.size()>1; i=i+2) {
                cout << s1[i] << " " << s1[i+1] << " ";
                cout << endl;
            }
           

            for (int i = 0; i < h1.size()&& h1.size()>1 ; i=i+2) {
                cout << h1[i] << " " << h1[i+1] << " ";
                cout << endl;
            }
         
            // d
            for (int i = 0; i < c1.size() && c1.size()>1; i=i+2) {
                cout << c1[i] << " " << c1[i+1] << " ";
                cout << endl;
            }
          
            int temp2=0;
            for (int i = 0; i < d1.size()-temp ; i=i+2) {
                cout << d1[i] << " " << d1[i+1] << " ";
                cout << endl;
                temp2=i+2;
            }
          
            // PRINT SIZES
            // cout<<s1.size()<<" "<<c1.size()<<" "<<h1.size()<<" "<<d1.size()<<endl;
            // std::cout << s_size <<endl;
            if(s_size>0)
            {
                cout << s1[s_size-1] << " " << d1[temp2++] << " ";
                cout << endl;
            }
            if(h_size>0)
            {
                cout << h1[h_size-1] << " " << d1[temp2++] << " ";
                cout << endl;
            }
            if(c_size>0)
            {
                cout << c1[c_size-1] << " " << d1[temp2++] << " ";
                cout << endl;
        }
        
        }

            
                    }


                    // flush all arrrays
    s1.clear();
    c1.clear();
    h1.clear();
    d1.clear();
    s.clear();

    

// cout<<"passed";
//     cout << endl;
    // for (int i = 0; i < s1.size(); i++) {
    //     cout << s[i] << " ";
    // }
        return 0;
    

}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // cout<<22222;
    while (t--)
    {
        solve();
    }
    return 0;
}