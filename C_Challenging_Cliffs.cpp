#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> heigths(n);
    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>heigths[i];
    }
    sort(heigths.begin(),heigths.end());
    int min_diff = INT_MAX;
    int index=0;
    for(int i=0;i<n-1;i++)
    {
        if(min_diff>min(min_diff,heigths[i+1]-heigths[i]))
        {
            index=i;
        }
        min_diff = min(min_diff,heigths[i+1]-heigths[i]);
        
    }
    ans[0]=heigths[index];
    ans[n-1]=heigths[index+1];
    cout<<ans[0]<<" ";
     for(int i=index+2;i<n;i++)
    {
        cout<<heigths[i]<<" ";
    }
    for(int i=0;i<index;i++)
    {
        cout<<heigths[i]<<" ";
    }
    cout<<ans[n-1]<<" ";
   
    cout<<endl;




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