#include<bits/stdc++.h>
using namespace std;

#define int long long 
void solve()
{
    int n;
    cin>>n;
    vector<int> flowers(n);
    for(int i=0;i<n;i++)
    {
        cin>>flowers[i];
    }
    int carry=0;
    int critical_time=flowers[n-1];
    for(int i=n-2;i>=0;i--)
    {   
       
        critical_time = max(critical_time + 1, flowers[i]);
    
    }
    cout<<critical_time<<endl;
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