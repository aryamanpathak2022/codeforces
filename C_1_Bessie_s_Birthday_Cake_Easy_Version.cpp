#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int max_triangles(int n, const vector<int>& chosen) {
    if (chosen.size() < 3) return 0;

    unordered_set<int> chosen_set(chosen.begin(), chosen.end());
    vector<int> sorted_chosen(chosen.begin(), chosen.end());
    sort(sorted_chosen.begin(), sorted_chosen.end());

    int triangles = 0;
    for (int i = 0; i < sorted_chosen.size(); ++i) {
        int j = (i + 1) % sorted_chosen.size();
        int k = (i + 2) % sorted_chosen.size();

        while (k < sorted_chosen.size() && (sorted_chosen[k] - sorted_chosen[i]) % n < n / 2) {
            int a = sorted_chosen[i];
            int b = sorted_chosen[j];
            int c = sorted_chosen[k];

            if (chosen_set.count((a + b) % n) && chosen_set.count((b + c) % n) && chosen_set.count((c + a) % n)) {
                ++triangles;
            }

            j = (j + 1) % sorted_chosen.size();
            k = (k + 1) % sorted_chosen.size();
        }
    }

    return triangles;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> chosen(x);
        for (int i = 0; i < x; ++i) {
            cin >> chosen[i];
        }

        cout << max_triangles(n, chosen) << endl;
    }

    return 0;
}