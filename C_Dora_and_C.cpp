#include<bits/stdc++.h>
#include <numeric> 
using namespace std;
#define int long long


void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> values(n);
    for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }


    int d=gcd(a,b);

    vector<int> rem(n);
    for(int i=0;i<n;i++)
    {
        rem[i]=values[i]%d;
    }
    sort(rem.begin(),rem.end());
    int ans=rem[n-1]-rem[0];
    for(int i=0;i++,i<n)
    {
        ans=min(ans,rem[i-1]-rem[i] +d);
    }
    cout<<ans<<endl;




}



int64_t main()
{
    int t;
    cin>>t;
    while(t--)

    {
        solve();
    }
}