#include <bits/stdc++.h>

using namespace std;

int distributeCandies(vector<int> candies) {
    unordered_set<int> distinctCandies;
    int n = candies.size()/2;
    for(auto i: candies){
        distinctCandies.insert(i);
    }
    int m = distinctCandies.size();
    return n>m?m:n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> candies = {1, 1, 2, 2, 3, 3};
    cout << distributeCandies(candies);
    return 0;
}