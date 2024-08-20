#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n;
    cin>>n;
    vector<int> points(n);
    for(int i=0;i<n;i++)
    {
        cin>>points[i];
    }
    if(n!=2)
    {
        cout<<"NO";
        cout<<endl;
        return;
    }
    if(points[0]-points[1]==1 || points[0]-points[1]==-1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
        cout<<endl;

    return;
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