#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> row(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> row[i];
        }
        if(n==1){
            abs(row[0]-row[1]>=x) ? cout << "YES\n" : cout << "NO\n";
            continue;
        }
        sort(row.begin(), row.end());
        bool res = true;
        for (int i = 0; i < n; i++) {
            if (row[i + n] - row[i] < x) res = false;
        }
        res ? cout << "YES\n" : cout << "NO\n";
    }
}