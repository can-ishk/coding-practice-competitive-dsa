#include <bits/stdc++.h>

using namespace std;

int maximumScore(int a, int b, int c) {
    priority_queue<int> q;
    int score = 0;
    q.push(a);
    q.push(b);
    q.push(c);
    while (q.size() > 1) {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        x--;
        y--;
        if (x!=0) {
            q.push(x);
        }
        if (y!=0) {
            q.push(y);
        }
        score++;
    }
    return score;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    cout << maximumScore(a, b, c) << "\n";
    return 0;
}