#include <bits/stdc++.h>

using namespace std;

/*
N Blocks
ith block: [A, Z]

Q: L, R;
L, R: block positions

my approach: know the alphabets and their counts for each range.
(NGL, seems slow to me, lets see how it goes.)

*/

int main(){ //O(n^2) time for each case
    int t;
    cin>>t;
    int c = 1;
    while(c<=t){
        int n, q;
        cin>>n>>q;
        string blocks;
        cin>>blocks;
        int num = 0;
        for(int i=0; i<q; i++){
            int l,r;
            cin>>l>>r;
            unordered_map <char, int> umap; //O(1) space: no more than 26 pairs
            for(int i=l-1; i<r;i++){ //O(n) time
                umap[blocks[i]]++;
            }
            bool odd = false, count = true;
            for(auto i: umap){ //O(1) time: no more than 26 iterations
                if(!count) break;
                if(i.second%2!=0){
                    if(odd) count = false;
                    else odd = true;
                }
            }
            if(count) num++;
        }
        cout<<"Case #"<<c++<<":"<<" "<<num<<'\n';
    }
}