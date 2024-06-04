#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;long long k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int x=0;x<n;x++)
    cin>>a[x];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    long long lst=a.back(),cnt=1;
    a.pop_back();
    while(!a.empty()&&lst==a.back())a.pop_back(),cnt++;
    while(!a.empty())
    {
        long long delta=a.back()-lst;
        if(k<delta*cnt)break;
        k-=delta*cnt;
        lst=a.back();
        while(!a.empty()&&lst==a.back())a.pop_back(),cnt++;
    }
    lst+=k/cnt;
    k%=cnt;
    cnt-=k;
    cout<<lst*n-cnt+1<<endl;
}
main()
{
    ios::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
}