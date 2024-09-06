#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int paths=1;

   while(i!=n-1 && j!=1)

   {
    if(j==1)
    {
        i++;
        path.push_back(a[i]);
    }
    else if(i==n-1)
    {
        j=!j;
        path.push_back(b[j]);

    }
         else if(a[i]==b[j])
         {
              path.push_back(a[i]);
              counter++;
         }
         else if(a[i]==b[j-1])
         {
              path.push_back(a[i]);
              i++;
         }
         else if(a[i]==b[j+1])
         {
              path.push_back(a[i]);
              j++;
         }
         else
         {
              paths=0;
              break;
         }
   }

    // print path
    for(int i=0;i<path.size();i++)
    {
        cout<<path[i];
    }
    cout<<endl; 
    cout<<paths<<endl;
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