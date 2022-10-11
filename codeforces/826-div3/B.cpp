#include <bits/stdc++.h>

using namespace std;

/*
5 = 5 4 1 2 3


*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1 or n==3)
            cout<<"-1";
        else{
            int k = n/2;
            if(n&1) k++;
            for(int i=n; i>k; i--)
                cout<<i<<" ";
            for(int i=1; i<=k; i++)
                cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}