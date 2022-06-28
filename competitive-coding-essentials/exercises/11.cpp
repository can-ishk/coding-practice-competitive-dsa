#include <bits/stdc++.h>

using namespace std;

int numOfSetBits(int n){
    int c = 0;
    while(n>0){
        n=n&(n-1);
        c++;
    }
    return c;
}

vector<int> sortByBits(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](const int &a, const int &b)->bool{
        int numA = numOfSetBits(a), numB = numOfSetBits(b);
        if(numA==numB) return a<b;
        return numA<numB;
    });
    return arr;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(auto i: sortByBits({0,1,2,3,4,5,6,7,8})){
        cout<<i<<" ";
    }
    return 0;
}