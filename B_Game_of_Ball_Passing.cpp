#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()

{
    int n;
    cin>>n;
    vector<int> passes(n);
    for(int i=0;i<n;i++)
    {
        cin>>passes[i];
    }
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+passes[i];
    }
    
    int maxi=*max_element(passes.begin(),passes.end());
    
    if(maxi>(sum-maxi+1))
    {
        // cout<<"hekkoi";
        ans=maxi-(sum-maxi+1)+1;
    }
    else{
        if(sum==0)
        {
            ans=0;
        }
        else
        {
        ans=ans+1;
    }
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