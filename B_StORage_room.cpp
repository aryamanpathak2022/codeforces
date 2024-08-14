#include<bits/stdc++.h>
using namespace std;
#define int long long





void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> table;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        table.push_back(temp);
    }

    vector<int> password(n,(1<<30) - 1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            password[i]&=table[i][j];
            password[j]&=table[i][j];


        }
    }
    int possible=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        if(i!=j && table[i][j]!=(password[i]|password[j]))
        {
            possible=0;
            break;
        }
        
    }
        
    }
    if(possible)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<password[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    //       for(int i=0;i<n;i++)
    //     {
    //         cout<<password[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    }
    
}


int32_t main()
{
    // int INT_MAXi=(1<<30) - 1;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}