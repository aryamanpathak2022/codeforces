// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void run(){
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>arr1(n);
    for(auto &i:arr1) cin>>i;
    sort(arr1.begin(),arr1.end());
    ll ans=0;
    ll i=0;
    while(k>0){
        if(k>=m){
           ans+=m*arr1[i]+m*(i*m);
           k=k-m;
        }
        else{
            ans+=k*arr1[i]+k*(i*m);
            break;
        }
        i++;
    }
    cout<<ans<<endl;
}
 
int main() {
    int t;cin>>t;
    while(t--) run();
    return 0;
}