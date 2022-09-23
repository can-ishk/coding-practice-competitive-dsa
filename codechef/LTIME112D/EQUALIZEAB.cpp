#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        if(abs(b-a)%(2*x)) cout<<"NO\n";
        else cout<<"YES\n";
    }
   return 0;
}
