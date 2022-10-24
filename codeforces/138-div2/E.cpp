#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        // LMAO NVM
        int n,m;
        cin>>n>>m;
        vector<vector<int>> field(n);
        unordered_map<int,bool> blocked;
        vector<vector<int>> possible(m);
        for(int i=0; i<m; i++){
            blocked[i]=false;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m;j++){
                char temp;
                cin>>temp;
                if(temp=='.') field[i][j]=0;
                else {
                    field[i][j]=1;
                    umap[j] = true;
                }
            }
        }
        for(int i=0; i<m; i++){
            if(!blocked[i]){
                for(int j=0; j<n; j++){
                    if(j==0){

                    }
                }
            }
        }
    }
    

    return 0;
}