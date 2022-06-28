#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    int c=0, max=0;
    while(n>0){
        if(n&1==1) c++;
        else c=0;
        if(c>max) max = c;
        n=n>>1;
    }
    return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve(156);
    return 0;
}