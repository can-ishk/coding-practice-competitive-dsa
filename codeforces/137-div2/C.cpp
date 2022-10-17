#include <bits/stdc++.h>

using namespace std;


// Runtime Error, doesnt work. Will debug later.


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string lids;
        cin>>lids;
        vector<int> mags(n);
        unordered_map<int,int> umap;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            mags[i]=temp;
            umap[temp]=i;
        }
        vector<int> sorted = mags;
        sort(sorted.begin(), sorted.end());
        for(int i=n-1; i>=0; i++){
            int pos = umap[sorted[i]];
            if(lids[pos]=='0'){
                if(pos-1>0)
                if(mags[pos-1]<mags[pos] and lids[pos-1]=='1'){
                    if(mags[pos+1]<mags[pos] and lids[pos+1]=='1'){
                        if(mags[pos+1]<mags[pos-1]){
                            lids[pos+1]='0';
                        }
                        else lids[pos-1]='0';
                        lids[pos]='1';
                    }
                    else{
                        lids[pos-1]='0';
                        lids[pos]='1';
                    }
                }
                else if(pos+1<n)
                    if(mags[pos+1]<mags[pos] and lids[pos+1]=='1' and (pos+1)<n){
                    lids[pos+1]='0';
                    lids[pos]='1';
                }
            }
        }
        int sum = 0;
        for(int i=0;i<n; i++){
            if(lids[i]=='1') sum+=mags[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}