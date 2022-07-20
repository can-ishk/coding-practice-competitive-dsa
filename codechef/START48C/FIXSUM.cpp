#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        unsigned int n, s, res;
        cin>>n>>s;
        if(n==2){
             cout<<s/2+1<<"\n";
             continue;
        }
        res = s/n+1;
        cout<<res<<"\n";
    }
    return 0;
}