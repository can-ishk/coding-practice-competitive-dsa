#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long int n;
    cin >> n;
    unsigned long int sum = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++) {
        unsigned long int x;
        cin >> x;
        sum -= x;
    }
    cout << sum;
}