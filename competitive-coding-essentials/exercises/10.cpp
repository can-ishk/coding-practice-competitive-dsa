#include <bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int> encoded, int first) {
    vector<int> arr(encoded.size()+1);
    arr[0] = first;
    for(int i=1; i<arr.size(); i++){
        arr[i] = arr[i-1]^encoded[i-1];
    }
    return arr;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i:decode({1,2,3}, 1)){
        cout<<i<<" ";
    }
    return 0;
}