#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int c = 1;
    while(c<=t){
        int n, m;
        cin>>n>>m;
        int candies=0;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            candies+=temp;
        }
        int candyCount = candies%m;
        cout<<"Case #"<<c++<<":"<<" "<<candyCount<<'\n';
    }
}