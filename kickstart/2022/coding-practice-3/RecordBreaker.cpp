#include <bits/stdc++.h>
using namespace std;

int NumberOfRecordBreakingDays(int numberOfDays, vector<int> visitors) {
  // TODO: Complete this function to get the number of record breaking days
  // O(n) time, O(1) space.
  int recordBreakingDays = 0;
  int maxPrevVisitors = visitors[0];
  if(visitors[0]>visitors[1]){
    recordBreakingDays++;
  }
  if(numberOfDays==1) return 1;
  for(int i=1; i<numberOfDays; i++){
    int currDayVisitors = visitors[i];
    int nextDayVisitors = i<numberOfDays-1?visitors[i+1]:0;
    if(currDayVisitors>maxPrevVisitors){
        maxPrevVisitors = currDayVisitors;
        if(currDayVisitors>nextDayVisitors or i==numberOfDays-1)
            recordBreakingDays++;
    }
  }
  return recordBreakingDays;
}

int main() {
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; ++tc) {
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
      cin >> V[i];
    }
    cout << "Case #" << tc << ": " << NumberOfRecordBreakingDays(N, V) << endl;
  }
  return 0;
}
