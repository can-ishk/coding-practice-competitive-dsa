#include <bits/stdc++.h>

using namespace std;


int minOps(vector<int> a){
    int maxDiff = 0, currDiff;
    for(int i=1; i<a.size(); i++){
        currDiff = a[i-1]-a[i];
        if(currDiff>0){
            maxDiff=max(currDiff,maxDiff);
        }
        
    }
    return maxDiff;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        vector<int> b(a);
        int ops=0;
        for(int i=0; i<n-1;i++){
            b[i]=b[i+1]-b[i];
            if(b[i]<0) ops+=abs(b[i]);
        }
        while(q--){
            int i,x;
            cin>>i>>x;
            a[--i]=x;
            int bi=a[i]-a[i-1], bi1;
            if(i+1<a.size())
                bi1=a[i+1]-a[i];
            else bi1=0;
            if(bi1<0 and bi<0)
                ops+=abs(min(bi1,bi));
            else if(bi1<0){
                ops+=abs(bi1);
                if(b[i]<0 and bi<ops) ops-=bi;
            }
            else if (bi<0) {
                ops+=abs(bi);
                if(b[i-1]<0) ops-=bi1;
            }
            b[i]=bi;
            b[i-1]=bi1;
            /*
                3 2 1   -1 -1 1
                3 2 10  -1 8


                */
            // cout<<minOps(a)<<"\n";
            cout<<ops<<"\n";
        }
    }
    return 0;
}