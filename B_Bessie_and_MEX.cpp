#include <iostream>
#include <vector>
#include <unordered_map>

int find_mex(std::unordered_map<int, bool>& hashmap, int mexx) {
    while (hashmap.find(mexx) != hashmap.end()) {
        mexx++;
    }
    return mexx;
}

std::vector<int> construct_permutation(int n, std::vector<int>& a) {
    std::vector<int> p;
    int mex = 0;
    std::unordered_map<int, bool> hashmap;
    for (int i = 0; i < n; ++i) {
        mex = find_mex(hashmap, mex);
        if (mex - a[i] < 0 || hashmap.find(mex - a[i]) != hashmap.end()) {
            p.push_back(mex);
            hashmap[mex] = true;
            mex = find_mex(hashmap, mex);
        } else {
            p.push_back(mex - a[i]);
            hashmap[mex - a[i]] = true;
        }
    }
    return p;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        
        // Construct permutation
        std::vector<int> result = construct_permutation(n, a);
        
        // Print the permutation
        for (int i = 0; i < n; ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
