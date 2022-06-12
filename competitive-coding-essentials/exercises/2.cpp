#include <bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int> nums, int k) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()-k];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k = 1;
    vector<int> nums = {4,5,1,3,2};
    cout<<findKthLargest(nums,k)<<"\n";
    return 0;
}