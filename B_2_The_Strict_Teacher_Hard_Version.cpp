#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<int> a(q),b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
    }
    sort(b.begin(),b.end());
   
   
    for(int i=0;i<q;i++)

{
    if(a[i]<b[0])
   {
    
         cout<<b[0]-1<<endl;
         continue;
       
   }
    if(a[i]>b[m-1])
    {
        
        cout<<n-b[m-1]<<endl;
        continue;

    }
    auto it = lower_bound(b.begin(),b.end(),a[i]);
    int index_lower = it-b.begin();
    if(a[i]==b[index_lower])
    {
        cout<<0<<endl;
        continue;
        
       
    
    }
    else
    {
        int ans = ((b[index_lower]+b[index_lower-1])/2)-b[index_lower-1];
        cout<<ans<<endl;
    }

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