#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // string temp(4, 'k');
    // cout<<temp;
    // return 0;
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char, int> chars;
    for(auto i: s){
        chars[i]++;
    }
    bool odd =false;
    char mid;
    for(auto i: chars){
        if(i.second&1){
            if(odd or n&1==0){
                cout<<"NO SOLUTION\n";
                return 0;
            }
            odd=true;
            mid=i.first;
            i.second--;
        }
        i.second/=2;
    }
    string str1 = "", str2 = "";
    for(auto i: chars){
        string temp(i.second/2, i.first);
        str1=str1+temp;
        str2=temp+str2;

    }
    odd?cout<<str1+mid+str2:cout<<str1+str2;
    return 0;
}