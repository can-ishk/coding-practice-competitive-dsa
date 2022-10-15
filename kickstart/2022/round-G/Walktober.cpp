#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long t;
    cin>>t;
    for(unsigned long c=1; c<=t; c++){
        unsigned long m,n,p;
        cin>>m>>n>>p;
        p--;
        vector<unsigned long> maxS(n);
        vector<unsigned long> john(n);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                unsigned long s;
                cin>>s;
                maxS[j]=max(maxS[j],s);
                if(i==p){
                    john[j]=s;
                }
            }
        }
        unsigned long stepCount=0;
        for(int i=0; i<n; i++){
            if(maxS[i]>john[i])
                stepCount+=maxS[i]-john[i];
        }
        cout<<"Case #"<<c<<": "<<stepCount<<"\n";
    }
    return 0;
}