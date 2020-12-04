#include <iostream>
using namespace std;

int main()
{
    int t, n, m, score[1000];

    cin >> t;

    while(t--) {
        int sum = 0;

        cin >> n >> m;

        for(int i = 0; i < n; i++) {
            cin >> score[i];
            sum += score[i];
        }

        sum -= score[0];

        if(score[0] < m) {
            if(m - score[0] <= sum) {
                score[0] = m;
                cout << score[0] << '\n';
            } else {
                score[0] += sum;
                cout << score[0] << '\n';
            }
        } else cout << score[0] << '\n';
    }
    
    return 0;
}