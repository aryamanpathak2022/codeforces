#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int l,r,L,R;
    cin>>l>>r>>L>>R;
    int ans;
    if(max(l,L)<min(r,R))
    {
        ans=min(r,R)-max(l,L);
        if(min(r,R)<max(r,R))
        {
            ans++;
        }
        if(max(l,L)>min(l,L))
        {
            ans++;
        }

    }
    else{
        ans=1;
    }
    
    cout<<ans<<endl;
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