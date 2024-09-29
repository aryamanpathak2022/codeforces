#include<bits/stdc++.h>
using namespace std;


int ask(vector<string> t)
{
    // ask by printing full vector
    int result;
    for (int i = 0; i < t.size(); i++)
    {
        cout<<t[i];
    }
    cout<<endl;
   
    cout.flush();
    cin>>result;
    return result;
}
void final_answer(string t)
{
    cout<<"! "<<t<<endl;
    cout.flush();
}

void solve()
{
    int n;
    cin>>n;

    vector<string> password;
    password.push_back("0")
    int size=0;
   
    while(1)
    {
        int result=ask(password);
        if(result)
        {
            size=password.size();
            
            
        }
        else{
            size=size/2
        }
        for(int )

      


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