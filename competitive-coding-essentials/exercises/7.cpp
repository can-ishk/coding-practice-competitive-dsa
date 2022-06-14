#include <bits/stdc++.h>

using namespace std;

string getHint(string secret, string guess) {
    int b=0, c=0;
    unordered_map<char, int> sec;
    for (auto i : secret) {
        if (sec.count(i) == 0)
            sec[i] = 1;
        else
            sec[i]++;
    }
    for(int i=0; i<guess.size(); i++){
        if(secret[i]==guess[i]){
            b++;
        }
        if(sec.count(guess[i]) and sec[guess[i]]>0){
            c++;
            sec[guess[i]]--;
        }
    }
    c-=b;
    return to_string(b)+'A'+to_string(c)+'B';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << getHint("1123", "0111");
    return 0;
}