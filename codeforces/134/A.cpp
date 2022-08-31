#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        char pixel;
        unordered_set<char> pixels;
        for(int i=0; i<4;i++){
            cin>>pixel;
            pixels.insert(pixel);
        }
        cout<<pixels.size()-1<<"\n";
    }
    return 0;
}