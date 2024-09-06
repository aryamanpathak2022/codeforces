#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n,k;
    cin>>n>>k;

    int x=k-2;
    int ans=0;
   
    for(int i=0;i<=n;i++)
    {
        
        if(!((n-i)%x) && ((n-i)/x)>=i)
        {

            // cout<<i<<" "<<((n-i)/x)<<endl;
            ans++;
            
        }
        
    }
    if(n%2!=0 && ans%2==0)
    {
        cout<<ans/2<<endl;
        return;
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