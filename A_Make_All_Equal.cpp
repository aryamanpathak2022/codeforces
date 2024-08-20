#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> cyc(n);
    for(int i=0;i<n;i++)
    {
        cin>>cyc[i];
    }
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[cyc[i]]++;
    }
    int maxfreq=0;
    for(auto i:freq)
    {
        maxfreq=max(maxfreq,i.second);
    }
    cout<<n-maxfreq<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();    }
}