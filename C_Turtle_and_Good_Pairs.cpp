    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <map>

    using namespace std;

    int main() {
        int t;
        cin >> t;
        
        while (t--) {
            int n;
            string s;
            cin >> n >> s;
            
            map<char, int> freq;
            for (char c : s) {
                freq[c]++;
            }
            int nocos=0;
            for(int i=0;i<n-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    nocos=1;
                    break;

                    
                }

            }
            if(nocos==0)
            {
               cout<<s<<endl;
                   continue;
            }
            
            vector<pair<int, char>> sorted_chars;
            for (auto& p : freq) {
                sorted_chars.push_back({p.second, p.first});
            }
            
        
            sort(sorted_chars.rbegin(), sorted_chars.rend());
            
            string result;
            for (auto& p : sorted_chars) {
                result += string(p.first, p.second);
            }
            
            cout << result << endl;
        }
        
        return 0;
    }
