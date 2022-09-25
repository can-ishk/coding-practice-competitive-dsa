#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> pos(n), time(n);
        for(int i=0; i<n; i++)
            cin>>pos[i];
        int maxT=0;
        for(int i=0; i<n; i++){
            cin>>time[i];
            if(time[i]>time[maxT]) maxT=i;
        }
        vector<float> timeToCenter(n);
        float xO = n/2;
        for(int i=0; i<n; i++){
            timeToCenter[i]=time[i]+xO-pos[i];
        }
        if(n==1){
            cout<<pos[0]<<"\n";
            continue;
        }
        //if there was no concept of time, they should meet and the center;

    }
    return 0;
}