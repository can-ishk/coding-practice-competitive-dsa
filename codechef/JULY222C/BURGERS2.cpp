#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    if(x*n>r) cout<<-1;
	    else{
	        int upgrade = y-x;
	        int cost = x*n;
	        int p = 0;
	        int rem = r-cost;
	        if(x==y){
	            cout<<0<<" "<<n;
	            continue;
	        }
	        if(rem>=upgrade){
	            p = rem/upgrade;
	        }
	        if(p>n) p=n;
	        cout<<n-p<<" "<<p;
        }
	   cout<<"\n";
	}
	return 0;
}
