#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,n,x;
	    cin>>a>>b>>n;
	    if(a%b==0) cout<<-1;
	    else{
	       x=n;
	       if(x%a){
	           x=n-(x%a)+a;
	       }
	       for(x;!(x%a==0 and x%b!=0);x+=a);
	       cout<<x;
	    }
	    cout<<"\n";
	}
	return 0;
}
