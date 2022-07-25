#include <bits/stdc++.h>
using namespace std;

vector<long> solve(long n, long m){
    long ansA=n, ansB=m-(m%n), maxDiff = 0;
    for(long i=n; i<=m;){
        long a = i;
        long b = m-(m%i);
        // cout<<a<<" "<<b<<"\n";
        long diff = abs(a-b);
        if(diff>maxDiff){
            maxDiff=diff;
            ansA = a;
            ansB = b;
        }
        i+=m%a;
    }
    return {ansA,ansB};
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;
        vector<long> ans = solve(n,m);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
	return 0;
}
