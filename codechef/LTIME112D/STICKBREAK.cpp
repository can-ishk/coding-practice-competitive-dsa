#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    /*
        7 20 l%k=6 l/k=2 4
        2 2 2 2 2 2 6 last = l%k        
        3 3 3 3 2 2 2 distribute (l%k)-(l/k) among 7
    */
    while(t--){
        int l,k;
        cin>>l>>k;
        if(l%k==0) cout<<"0\n";
        else cout<<"1\n";
    }
    return 0;
}