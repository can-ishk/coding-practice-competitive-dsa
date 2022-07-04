#include <bits/stdc++.h>

using namespace std;

/*
Approach:
()()() = ()3 + ()()2 + ()()()1 = sigma 3

()()()() = ()4 + ()()3 + ()()()2 + ()()()()1 = sigma 4

()()()()() = ()5 + ()()4 + ()()()3 + ()()()()2 + ()()()()()1 = sigma 5

sigma ~ summation
*/


int main(){
    int t;
    cin>>t;
    int c = 1;
    while(c<=t){
        unsigned long l,r;
        cin>>l>>r;
        unsigned long ans = min(l,r);
        ans = ans*(ans+1)/2;
        cout<<"Case #"<<c++<<":"<<" "<<ans<<'\n';
    }
}