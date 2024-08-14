#include<bits/stdc++.h>

using namespace std;

int solve()
{
    int l,r;
    cin>>l>>r;
    int ans=0;
    while(l>0)
    {
        ans=ans+2;
        l=l/3;
    }
    for(int i=l+1;i<=r;i++)
    {
        int temp=i;
        while(temp>0)
        {
            ans++;
            temp=temp/3;


        }
    }
    cout<<ans<<endl;
    return 0;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }}