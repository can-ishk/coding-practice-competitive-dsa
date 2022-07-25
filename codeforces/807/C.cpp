#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c, q;
        cin>>n>>c>>q;
        string s;
        vector<vector<int>> str;
        cin>>s;
        int n=s.size();
        for(int i=0; i<c; i++){
            int l,r;
            cin>>l>>r;
            str.push_back({n, l-r+1, l-1,r-1});
        }
        for(int i=0; i<q; i++){
            int k;
            cin>>k;
            k--;
            if(k<s.size()) cout<<s[k];
            else{
                for(auto i:str){
                    if(i[0]==k){
                        return s
                    }
                }
            }
        }
    }
}