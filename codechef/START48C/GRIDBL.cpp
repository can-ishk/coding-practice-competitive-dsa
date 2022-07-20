#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%2==0 and m%2==0) cout<<0<<"\n";
        else if (n%2==1 and m%2==1) cout<<n+m-1<<"\n";
        else n%2?cout<<m<<"\n":cout<<n<<"\n";
    }
    return 0;
}