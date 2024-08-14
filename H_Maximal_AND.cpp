#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve() {
    int n,k;
       cin>>n>>k;
       int a[n];
       for(int i=0;i<n;i++) cin>>a[i];
       int ans=0;
       for(int j=30;j>=0;j--)
       {
           int cnt=0;
           for(int i=0;i<n;i++)
                if(a[i] & (1<<j))
                    cnt++;
           cnt=n-cnt;
           if(cnt<=k) ans+=(1<<j),k-=cnt;
       }
       cout<<ans<<endl;
    return 0;
    } 



int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
