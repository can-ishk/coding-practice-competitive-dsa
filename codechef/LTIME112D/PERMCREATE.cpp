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
        if(n==4){
            cout<<"3 1 4 2\n";
            continue;
        }
        else if(n<5){
            cout<<"-1\n";
            continue;
        }
        for(int i=1; i<=n; i+=2) cout<<i<<" ";
        for(int i=2; i<=n; i+=2) cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}