#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==1)
            cout<<n*n;
        else if(n==k)
            cout<<1;
        else 
            cout<<pow((n/k),2);
        cout<<"\n";
    }
    return 0;
}