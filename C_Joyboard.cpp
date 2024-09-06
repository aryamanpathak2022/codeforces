#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int count =0;
    if(k>3)
    {
        cout<<0<<endl;
        return;
    }
    else if(k==1)

    {
        cout<<1<<endl;
        return;
    }
    else if(k==2)
    {
        if(m>n)
        {
            count =count+n+m/n -1;

        }
        else{
            count =count+m;
        }
        
       
        

    
    cout<<count<<endl;
    return;
    }
    else {
   if(m>n)
   {
    count=count+m-n+1 -m/n;
   }
    cout<<count<<endl;
    return;
    }
    
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