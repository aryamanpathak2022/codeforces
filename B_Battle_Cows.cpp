#include<bits/stdc++.h>
using namespace std;
#define long long ll;

void solve()
{

   int n,k; cin >> n >> k; k--;
        vector<ll>a(n);
        for(int i = 0;i<n;i++) cin >> a[i];
        swap(a[k],a[0]);
        int ans = 0;
        for(int i = 1;i<n;i++){
            if(a[i]<a[0]){
                ans++;
            }
            else{
                break;
            }
        }
        swap(a[k],a[0]);
        if(ans==n-1){
            cout << n-1 << endl;
        }
        else{
            if(ans<k){
                swap(a[ans+1],a[k]); int cnt = 0;
                //cout << a[2] << ' ';
                    if(a[ans+1]>=a[0]){
                        cnt = 1;
                        for(int i = ans+2;i<n;i++){
                            if(a[i]<=a[ans+1]){
                                cnt++;
                            }
                            else{
                                break;
                            }
                        }
                    }
                cout << max(ans,cnt) << endl;
            }
            else{
                cout << ans << endl;
            }
        }
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