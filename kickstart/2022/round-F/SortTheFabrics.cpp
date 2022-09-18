#include <bits/stdc++.h>

using namespace std;

struct Fabric{
    int id;
    string colour;
    int dur;
};

bool compareColour(const Fabric f1, const Fabric f2){
    if(f1.colour==f2.colour) return f1.id<f2.id;
    else return f1.colour<f2.colour;
}
bool compareDur(const Fabric f1, const Fabric f2){
    if(f1.dur==f2.dur) return f1.id<f2.id;
    else return f1.dur<f2.dur;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int c=1; c<=t; c++){
        int count=0;
        int n;
        cin>>n;
        vector<Fabric> fabrics1(n);
        for(int i=0; i<n; i++){
            cin>>fabrics1[i].colour;
            cin>>fabrics1[i].dur;
            cin>>fabrics1[i].id;
        }
        vector<Fabric> fabrics2(fabrics1);
        sort(fabrics1.begin(), fabrics1.end(), compareColour);
        sort(fabrics2.begin(), fabrics2.end(), compareDur);
        // for(auto i:fabrics1) cout<<i.id<<i.colour<<i.dur<<" ";
        // cout<<"\n";
        // for(auto i:fabrics2) cout<<i.id<<i.colour<<i.dur<<" ";
        // cout<<"\n";

        for(int i=0; i<n; i++)
            if(fabrics1[i].id==fabrics2[i].id)
                count++;        
        cout<<"Case #"<<c<<": "<<count<<"\n";
    }
    return 0;
}