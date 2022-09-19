#include <bits/stdc++.h>
using namespace std;

void findEven(vector<int> &evenLP, string input, int n){
	int l=0,r=-1;
	for(int i=0;i<n;i++){
		int k = (i>r)?0:min(evenLP[l+r-i-1], r-i+1);

		while(i-k-1>0 && i+k<n && input[i-k-1]==input[i+k]){
			k++;
		}

		evenLP[i] = k;
		k--;
		if(i+k>r){
			l = i-k-1;
			r = i+k;
		}
	}
}

void findOdd(vector<int> &oddLP, string input, int n){
	int l=0,r=-1; // left-right of the current pallindromic substring found.
	for(int i=0;i<n;i++){      // looping through considering the ith to be the center of a pallindrome.
		int k = (i>r)?1:(min(oddLP[l+r-i], r-i+1));   // finding k to do the brute method, where (i+j) = (l+r) gives j = (l+r-i) ie. the position symmetric to i in (l, r) or r-i+1 if it exceeds boundary. In case of i>r take k = 1 and perform brute.
		
		while(i-k>=0 && i+k<n && input[i-k]==input[i+k]){
			k++;
		}

		oddLP[i] = k;
		k--;
		if(i+k > r){
			l = i-k;
			r = i+k;
		}
	}
}	

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	unsigned long n,q;
	string s;
	cin>>n>>s>>q;
	set<string> palStrings;
    vector<int> oddLP(n, 1);
	vector<int> evenLP(n, 1);
	findOdd(oddLP, s, n);
	findEven(evenLP, s, n);
    // for(int i=0;i<s.size();i++){
    //     palStrings.insert(s.substr(i-oddLP[i],i+oddLP[i]));
    // }
    // for(int i=0;i<s.size();i++){
    //     palStrings.insert(s.substr(i-evenLP[i],i+evenLP[i]));
    // }
    string final = "";
    for(auto i: palStrings){
        cout<<i<<" ";
        final+=i;
    }
    unsigned long size = final.size()-1;
    while(q--){
        unsigned long l,r;
        cin>>l>>r;
        l--;
        r--;
        if(r>size or l>size or l<0 or r<0)
            cout<<"-1\n";
        else cout<<final.substr(l,r-l+1)<<"\n";
    }
    
	return 0;
}