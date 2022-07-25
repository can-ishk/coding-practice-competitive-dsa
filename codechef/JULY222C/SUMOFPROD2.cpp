#include <bits/stdc++.h>
using namespace std;
#define m 998244353

unsigned int factorial(unsigned int n)
{
    unsigned int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
 

int main() {
	int t;
	cin>>t;
	while(t--){
	    unsigned int n;
	    cin>>n;
	    vector<unsigned int> arr(n);
		unsigned int fac = factorial(n);
	    for(unsigned int i=0; i<n;i++) cin>>arr[i];
	    long sum = 0, curr=0;
    	for(unsigned int i=0; i<n;i++){
    	    if(arr[i]==1) curr++;
    	    else{
    	        unsigned int x = (fac%m) * curr%m*(curr%m+1)/2;
				// cout<<curr<<" ";
    	        sum+=x%m;
    	        curr=0;
    	    }
    	}
				// cout<<curr<<" ";
    	sum+= (fac%m) * (curr%m*(curr%m+1)/2)%m;
    	cout<<sum<<"\n";
	}
	return 0;
}
