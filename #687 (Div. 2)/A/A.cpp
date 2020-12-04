#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;

        int max_r = 0, max_c = 0;
        max_r = max(abs(1 - r), abs(n - r));
        max_c = max(abs(1 - c), abs(m - c));

        cout << max_r + max_c << '\n';
    }

    return 0;
}