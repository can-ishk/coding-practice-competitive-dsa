#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        vector<unsigned long long> h(n),s(n);
        for(int i=0; i<n; i++) cin>>h[i];
        for(int i=0; i<n; i++) cin>>s[i];
        /*
            the total time will contain all healths and (n-1) spells.
            we can leave out only one spell and the most optimal way would be to leave out max(s);
            Time = Sum(h) + Sum(s) - max(s)
        */
       unsigned long long maxSpell = s[0], sumHealths=0, sumSpells=0;

       for(int i=0; i<n; i++){
            maxSpell=max(maxSpell, s[i]);
            sumHealths+=h[i];
            sumSpells+=s[i];
       }
        cout<<sumHealths+sumSpells-maxSpell<<"\n";

    }
    return 0;
}