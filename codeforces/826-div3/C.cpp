#include <bits/stdc++.h>

using namespace std;


//Was trying something, gave up :/

int findSplitPoint(vector<int> arr, int n, int l, int r)
{
    int leftSum = 0;
    for (int i = l ; i < r ; i++)
        leftSum += arr[i];
    int rightSum = 0;
    for (int i=r-1; i >= l; i--)
    {
        rightSum += arr[i];
        leftSum -=  arr[i] ;
        if (rightSum == leftSum)
            return i ;
    }
    return -1;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout<<findSplitPoint({1,2,3,4,5,5},6,0,3);
    // return 0;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++)
            cin>>nums[i];
        int minThicc = n;
        int l=0,r=n,ans;
        while(n--){
            ans = findSplitPoint(nums,n,l,r);
            minThicc = min(max(ans-l,r-ans),minThicc);
            ans-l>r-ans?r=ans+1:l=ans-1;
        }
        cout<<minThicc<<"\n";
    }
    return 0;
}