#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        // XS<S<M<L<XL
        int xa=0,xb=0;
        xa = a.size()-1;
        xb = b.size()-1;
        if(a[a.size()-1] == 'S'){
            if(b[b.size()-1] == 'S'){
                if(xa==xb) cout<<"=";
                else cout<<(xa>xb?"<":">");
            }
            if(b[b.size()-1] == 'M' or b[b.size()-1] == 'L'){
                cout<<"<";
            }
        }
        if(a[a.size()-1] == 'M'){
            if(b[b.size()-1] == 'S'){
                cout<<">";
            }
            if(b[b.size()-1] == 'M'){
                cout<<"=";
            }
            
            if(b[b.size()-1] == 'L'){
                cout<<"<";
            }
        }
        if(a[a.size()-1] == 'L'){
            if(b[b.size()-1] == 'S'  or b[b.size()-1] == 'M'){
                cout<<">";
            }
            if(b[b.size()-1] == 'L'){
                if(xa==xb) cout<<"=";
                else cout<<(xa>xb?">":"<");
            }
        }
        cout<<"\n";
    }
    return 0;
}