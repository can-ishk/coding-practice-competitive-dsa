#include <bits/stdc++.h>

using namespace std;


int choose(int n, int k){
    if (k == 0) return 1;
    return (n * choose(n - 1, k - 1)) / k;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){ //O(1) n can be 9 at max.
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        // X X Y Y
        // 4choose2/2! * (10-n)choose2 =  6* (10-n)choose2
        // therefore:
        int perm = 6*choose(10-n,2);
        cout<<perm<<"\n";        
        
    }
    return 0;
}
