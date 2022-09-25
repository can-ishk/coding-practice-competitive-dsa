#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> nums(10);
        int x = 57;
        reverse(s.begin(), s.end());
        for(auto i:s){
            if(i<=char(x)){
                nums[i-'0']++;
                x=i;
            } else{
                if(i=='9')
                    nums[9]++;
                else
                    nums[i-'0'+1]++;
            }
        }
        for(int i=0; i<10; ++i){
            while(nums[i]--)
                cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}