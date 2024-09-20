#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve()
{
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;


    int min_blender=min(x,y);
    int ans;
    if(n%min_blender)
    {
        ans=n/min_blender+1;

    }
    else{
        ans=n/min_blender;
    }

    cout<<ans<<endl;
}


int32_t main()
{
    int t;
    cin>>t;
    while(t--)

    {
        solve();
    }
}