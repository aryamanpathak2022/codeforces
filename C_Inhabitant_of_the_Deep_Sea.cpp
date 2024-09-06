#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> ships(n);
    for(int i=0;i<n;i++)
    {
        cin>>ships[i];
    }
    int moves_l;
    int moves_r;
    if(k%2)
    {
        moves_l=k/2+1;
        moves_r=k/2;
        
    }
    else
    {
        moves_l=k/2;
        moves_r=k/2;

    }
    int l_sum=0;
    int r_sum=0;
    int j=n-1;
    int count=0;
    // print moves_l and movves_r
    // cout<<moves_l<<" "<<moves_r<<endl;
    for(int i=0;i<n;i++)
    {
            if( ships[i]>0 )
            {
                if(ships[i]<=moves_l)
                {

                    moves_l-=ships[i];
                    ships[i]=0;
                    count++;
                }
                else
                {
                    ships[i]-=moves_l;
                   break;

                }
                
                
            }
           
       
    }
    for(int i=n-1;i>=0;i--)
    {
            if(ships[i]>0 )
            {
                if(ships[i]<=moves_r)
                {
                  
                     moves_r-=ships[i];
                    ships[i]=0;
                    count++;
                }
                else
                {
                    ships[i]-=moves_r;
                    break;
                }
                
                
            }
           
       
    }
cout<<count<<endl;
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