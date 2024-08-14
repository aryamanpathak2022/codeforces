    #include<bits/stdc++.h>
    using namespace std;

    int solve()
    {
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>> intervals;
    
        for(int i=0;i<n;i++)
        {
            int l,r;
            cin>>l>>r;
            intervals.push_back({l,r});
            
            
        }
        int ans=0;
        int last=0;
        
        for(int i=0;i<n;i++)
        {
            if(intervals[i].first-last>=s)
            {
                ans=1;
                break;
            }
            else
            {
                last=intervals[i].second;
            }
        }

         if(m-last>=s)
            {
                ans=1;
              
            }
        
    
       
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        return 0;
        
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