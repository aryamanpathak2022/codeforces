#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
       vector<char> vowel = {'a','e','i','o','u'};
       vector<int> ans(5);
       int j=0;
         for(int i=0;i<n;i++)
         {
            
            if(j==5)
            {
                j=0;
            }
             
                     ans[j]++;
                     j++;
                
              }
            //   print ans
            // for(int i=0;i<5;i++)
            // {
            //     cout<<ans[i]<<" ";
            // }
            // cout<<endl;
              for(int i=0;i<5;i++)
              {
                    for(int j=0;j<ans[i];j++)
                    {
                        cout<<vowel[i];
                    }
              }
         
    
    
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