#include<bits/stdc++.h>
using namespace std;

#define int long long 

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    vector<pair<int,int>> coordinates;
    coordinates.push_back({x,y});
    int sum_x=(k-1)*x;
    int sum_y=(k-1)*y;
    k--;

    

    int curr_x=0;
    int curr_y=0;
    if(curr_x==x )
    {
        curr_x++;
    
    }
    if(curr_y==y)
    {
        curr_y++;
    }
    int  curr_sum_x=0;
    int curr_sum_y=0;
    if(k==1)
    {
        // remove the first element
        coordinates.erase(coordinates.begin());
        coordinates.push_back({sum_x-1,sum_y-1});
        coordinates.push_back({sum_x+1,sum_y+1});
        for(auto i:coordinates)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        cout<<" "<<endl;
        return;
    }
    for(int i=0;i<k;i++)
    {
        if(i==(k-1))
        {
            coordinates.push_back({sum_x-curr_sum_x,sum_y-curr_sum_y});
            break;
        }
        else
        {
            coordinates.push_back({curr_x,curr_y});
        }
        curr_sum_x+=curr_x;
        curr_sum_y+=curr_y;

        curr_x++;
        curr_y++;



    }
    for(auto i:coordinates)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<" "<<endl;


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