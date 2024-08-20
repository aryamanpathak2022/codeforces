#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<-1<<endl;
        return;
    }
    vector<int> perm(n);
    int lr=0;
    int rp=n-1;
    for(int i=1;i<n+1;i++)
    {
        if(i%2)
        {
            perm[lr]=i;
            lr+=1;
        }
        else
        {
           ;
            perm[rp]=i;
            rp-=1;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<perm[i]<<" ";
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