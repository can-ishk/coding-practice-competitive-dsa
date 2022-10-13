#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> counts;
        for(int i=0; i<n;i++){
            int x;
            cin>>x;
            counts[x]++;
        }
        int max=0;
        for(auto i:counts){
            if(i.second>max)
                max=i.second;
        }
        cout<<n-max<<"\n";
    }
    return 0;
}