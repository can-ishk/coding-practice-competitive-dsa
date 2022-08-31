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
        string a,b;
        cin>>a>>b;
        //RGB,,, G=B
        bool res = true;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                if(a[i]=='R' or b[i]=='R'){
                    cout<<"no\n";
                    res=false;
                    break;
                }
            }
        }
        if(res) cout<<"yes\n";
    }
    return 0;
}