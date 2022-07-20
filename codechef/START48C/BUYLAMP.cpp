#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x>=y){
            cout<<k*x+(n-k)*y<<"\n";
        }else{
            cout<<n*x<<"\n";
        }
    }
    return 0;
}