#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        unordered_map<int,int> orbits;
        for(int i=0; i<n;i++){
            int orb;
            cin>>orb;
            orbits[orb]++;
        }
        int cost = 0;
        for(auto i: orbits)
            if(c<i.second) cost+=c;
            else cost+=i.second;
        cout<< cost<<"\n";
    }
    return 0;
}
