#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int maxCount = 1, count = 1;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
            }
            count = 1;
        }
    }
    maxCount > count ? cout << maxCount : cout << count;
}