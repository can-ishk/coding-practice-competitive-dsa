#include <bits/stdc++.h>

using namespace std;

/*
    The following is my initial approach to the problem, but it's not as fast
    as a mathematical solution which is also implemented below.

    My Observations after looking at the 5x5 number spiral given in the
   question: if row, y is even, spiral[1][y] = y^2 if column, x is odd,
   spiral[x][1] = x^2

    spiral[x+1][x+1] = spiral[x][x] + 2*x
    spiral[0][0] = 1

    Let's try to find the closest diagonal element to the given co-ords.
    let k = max(x,y) and spiral element = spiral[k][k]

    now if k is odd, going up is an increment by 1 and going left is a decrement
   by 1. if k is even, going up is a decrement by 1 and going left is an
   increment by 1.

    now we can manipulate the co-ords to figure out the required spiral element.
    for example, to find y=1, x=4 we first find k = 4 and spiral[k][k] = 13.
    next, since k is even and y is less than k, we need to decrement by (k-y) to
    reach the required spiral element, i.e. 13 - (4-1) = 10.

    This is my approach to the problem.
*/
unordered_map<unsigned long long, unsigned long long> spiral;

unsigned long long findDiagonal(
    unsigned long long x) {  // Implementing diagonal finding algorithm using
                             // recursion and memoization
    if (x == 1) return 1;
    if (spiral.find(x) != spiral.end()) return spiral[x];
    spiral[x] = findDiagonal(x - 1) + 2 * (x - 1);
    return spiral[x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        // //my initial approach
        // unsigned long long y, x;
        // cin >> y >> x;
        // unsigned long long k = max(x, y);
        // unsigned long long spiralElement = findDiagonal(k);
        // if (k % 2 == 0) {
        //     if (y < k) spiralElement -= (k - y);
        //     if (x < k) spiralElement += (k - x);
        // } else {
        //     if (y < k) spiralElement += (k - y);
        //     if (x < k) spiralElement -= (k - x);
        // }
        // cout << spiralElement << "\n";

        // purely mathematical/formula based solution
        unsigned long long r, c;
        cin >> r >> c;
        if (r < c) {
            if (c % 2 != 0) {
                cout << c * c - r + 1 << "\n";
            } else {
                cout << (c - 1) * (c - 1) + r << "\n";
            }
        } else {
            if (r % 2 != 0) {
                cout << (r - 1) * (r - 1) + c << "\n";
            } else {
                cout << r * r - c + 1 << "\n";
            }
        }
    }
    return 0;
}