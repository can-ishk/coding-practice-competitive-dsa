#include <bits/stdc++.h>

using namespace std;


bool isPowerOfFour(int n) {
    if((n>>1)&((n>>1 )- 1)) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<isPowerOfFour(16)<<"\n";
    cout<<isPowerOfFour(24);
    return 0;
}