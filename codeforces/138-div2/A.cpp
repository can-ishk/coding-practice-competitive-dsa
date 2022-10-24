#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<pair<int,int>> pos;
        for(int i=0; i<m; i++){
            int a,b;
            cin>>a>>b;
            pos.insert({a,b});
        }
        // for(auto i: pos) cout<<i.first<<" "<<i.second;
        if(m<n)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}