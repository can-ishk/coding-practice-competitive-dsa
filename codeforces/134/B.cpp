#include <bits/stdc++.h>

using namespace std;


int distBw(int a, int b, int c, int d){
    return (abs(a-c) + abs(b-d));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        /*
        n,m location to reach
        x,y location of laser;
        d hit radius of laser;
        */
        int n, m, x, y, d;
        cin>>n>>m>>x>>y>>d;
        if(distBw(n,m,x,y)>=d){
            cout<<-1<<"\n";
            continue;
        }
        
        
    }
    return 0;
}