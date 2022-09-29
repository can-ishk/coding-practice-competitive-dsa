#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int lim = 1<<n;
    for(int i=0; i<lim; i++){
        int val = (i ^ (i >> 1));
        bitset<32> b(val);
        string s = b.to_string();
        cout << s.substr(32 - n)+"\n";
    }
    return 0;
}