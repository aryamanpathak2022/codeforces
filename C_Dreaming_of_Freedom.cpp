#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n,m;
    cin>>n>>m;
    if(n==1 || m==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(m>=n)
    {
        cout<<"NO"<<endl;
            return;

    }

    for(int i=2;i<=sqrt(n);i++)
    {
        if(!(n%i) && i<=m )
        {
            cout<<"NO"<<endl;
            return;
        }


    }
    
     cout<<"YES"<<endl;
            return;

    

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