#include <bits/stdc++.h>

using namespace std;

int firstUniqueChar(string s) {
    unordered_map<char, int> m;
    for(int i=0;i<s.size();i++){
        if(m.count(s[i])==0){
            m[s[i]]=1;
        }
        else{
            m[s[i]]++;
        }
    }
    for(int i=0;i<s.size();i++){
        if(m[s[i]]==1){
            return i;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "codingminutes";
    // cin >> s;
    cout << firstUniqueChar(s) << "\n";
    return 0;
}