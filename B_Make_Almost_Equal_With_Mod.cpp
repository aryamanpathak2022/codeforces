#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
     ll n,res = 2;
        cin>>n;
        vector < ll > v(n);
        for(ll i = 0 ; i < n ; i++) {
            cin>>v[i];
        }
        while(1) {
            set < ll > remainder;
            for(ll i = 0 ; i < (ll)v.size() ; i++) {
                remainder.insert(v[i]%res);
            }
            if((ll)remainder.size() == 2)
                break;
            res *= 2;
        }
        cout<<res<<endl;

    return;
   
    
    
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