#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, cnt = 0;
        cin >> n >> m;

        vector<int> start_bottom(n), start_left(m);

        for (int i = 0; i < n; i++)
            cin >> start_bottom[i];

        for (int i = 0; i < m; i++)
            cin >> start_left[i];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (start_bottom[i] == start_left[j]) cnt++;\
            
        cout << cnt << '\n';
    }

    return 0;
}