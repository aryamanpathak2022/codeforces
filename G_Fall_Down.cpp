#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> grids(r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char temp;
            cin >> temp;
            grids[i].push_back(temp);
        }
    }

    for (int j = 0; j < c; j++)
    {
        int count = 0;

        for (int i = 0; i < r; i++)
        {
            if (grids[i][j] == '*')
            {
                count++;
                grids[i][j] ='.';
            }
            if (grids[i][j] == 'o')
            {
                for(int k=0;k<count;k++)
                {
                    grids[i-k-1][j]='*';
                }

                count=0;
            }
            if(i==r-1)
            {
                for(int k=0;k<count;k++)
                {
                    grids[i-k][j]='*';
                }

            }
            // cout<<count<<endl;
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<grids[i][j];
        }
        cout<<endl;
    }
    cout<<""<<endl;
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


// .*.*....*.
// .*.......*
// ...o....o.
// .*.*....*.
// ..........
// .o......o*