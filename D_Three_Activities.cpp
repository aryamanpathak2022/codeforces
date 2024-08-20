#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> friends(3)
   for(int i=0;i<3;i++)
   {
         for(int j=0;j<n;j++)
         {
              int temp;
                cin>>temp;
                friends[i].push_back(temp);
         }
   }

   vector<int> maxi3(9,0)''
    int ans=0;
    for(int i=0;i<3;i++)
    {
        int max1,max2,max3=0;
        for(int j=0;j<n;j++)
        {
            if(friends[i][j]>max1)
            {
                max3=max2;
                max2=max1;
                max1=friends[i][j];
            }
            else if(friends[i][j]>max2)
            {
                max3=max2;
                max2=friends[i][j];
            }
            else if(friends[i][j]>max3)
            {
                max3=friends[i][j];
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