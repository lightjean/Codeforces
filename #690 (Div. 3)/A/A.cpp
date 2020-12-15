#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int a = 0, b = n - 1;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans.push_back(v[a++]);
            }
            else {
                ans.push_back(v[b--]);
            }
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
    return 0;
}