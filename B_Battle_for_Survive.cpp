#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    vector<int> ratings(n);
    for(int i=0;i<n;i++)
    {
        cin>>ratings[i];
    }
int sum=0;
int ans;
    for(int i=0;i<n-2;i++)
    {

        sum+=ratings[i];

    }
    // cout<<sum<<endl;
    if(n>1)
    {
        
  
     ans=ratings[n-1]-ratings[n-2]+sum;
      }
      else{
        ans=ratings[n-1];
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