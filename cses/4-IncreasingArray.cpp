#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long int n;
    cin >> n;
    vector<unsigned long int> v;
    for (int i = 0; i < n; i++) {
        unsigned long int x;
        cin >> x;
        v.push_back(x);
    }
    unsigned long int c = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            c += v[i] - v[i + 1];
            v[i+1]=v[i];
        }
    }
    cout << c;
    return 0;
}