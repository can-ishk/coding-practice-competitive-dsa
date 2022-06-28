#include <bits/stdc++.h>

using namespace std;

int numOfSetBits(int n){
    int c = 0;
    while(n>0){
        n=n&(n-1);
        c++;
    }
    return c;
}

int hammingDistance(int x, int y) {
    return numOfSetBits(x^y);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<hammingDistance(1,4);
    return 0;
}