#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n;i++) cin>>arr[i];
	    long sum = 0, curr=0;
    	for(int i=0; i<n;i++){
    	    if(arr[i]==1) curr++;
    	    else{
    	        int x = curr*(curr+1)/2;
    	        sum+=x;
    	        curr=0;
    	    }
    	}
    	sum+=curr*(curr+1)/2;
    	cout<<sum<<"\n";
	}
	return 0;
}
