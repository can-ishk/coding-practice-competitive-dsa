#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        // Using Mathematical Equations involving a,b, number of operation 1 and num of operation 2.
        if((a+b)%3==0 and (2*a-b)%3==0 and (2*b-a)%3==0 and (2*a>=b) and 2*b>=a)
            cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}