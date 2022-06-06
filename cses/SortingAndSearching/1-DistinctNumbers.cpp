#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    // unordered_map<unsigned long, bool> nums;
    vector<unsigned long> nums;
    for(int i=0; i<n; i++){
        unsigned long num;
        cin>>num;
        nums.push_back(num);
        // if(nums.find(num) == nums.end()){
        //     nums[num] = true;
        // }
    }
    unsigned long c = 1;
    sort(nums.begin(), nums.end());
    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[i-1]){
            c++;
        }
    }
    // cout<<nums.size();
    cout<<c;
    return 0;
}