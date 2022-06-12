#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> nums) {
    int cost = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto i: nums) pq.push(i);
    int a,b, num;
    while(pq.size()!=1){
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        num=a+b;
        pq.push(num);
        cost+=num;
    }
    return cost;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << solve(nums);
    return 0;
}