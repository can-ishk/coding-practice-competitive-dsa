#include <bits/stdc++.h>

using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        q;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int diff = abs(arr[i] - x);
        q.push({diff, arr[i]});
    }
    while (k--) {
        ans.push_back(q.top().second);
        q.pop();
    }
    sort(ans.begin(), ans.end(),
         [](const int& a, const int& b) -> bool { return a < b; });
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {1, 2, 3, 4, 5};
    for (auto i : findClosestElements(arr, 4, 3)) {
        cout << i << " ";
    }
    return 0;
}