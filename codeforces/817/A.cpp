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
        string s;
        cin>>s;
        if(n!=5){
            cout<<"NO\n";
            continue;
        }
        unordered_set<char> chars;
        for(auto i: s){
            chars.insert(i);
        }
        if(chars.size()!=5){
            cout<<"NO\n";
            continue;
        }
        if(chars.count('T') and chars.count('i') and chars.count('m') and chars.count('u') and chars.count('r') ){
            cout<<"Yes\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}