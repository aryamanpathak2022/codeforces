#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==2)
    {
        if(s[0]==s[1])
        {
            cout<<"NO"<<endl;
            return;
        }
        else
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    else if(n>2)
    {
        if(s[0]==s[n-1])
        {
            cout<<"NO"<<endl;
            return;
        }
        else
        {
            cout<<"YES"<<endl;
            return;
        
        }


    }
    else
    {
        cout<<"NO"<<endl;
        return;
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