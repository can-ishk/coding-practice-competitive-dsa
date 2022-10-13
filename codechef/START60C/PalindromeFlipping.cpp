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
        int z=0, o=0;
        for(int i=0; i<n; i++){
            char x;
            cin>>x;
            if(x=='0') z++;
            else o++;
        }
        if(z&1 and o&1) 
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}