#include<bits/stdc++.h>
using namespace std;



bool CanwePlace(vector<int> &stalls, int dist, int cows) {
    int cntCows = 1;
    int last = stalls[0];
    int n = stalls.size();
    for (int i = 0; i < n; i++) {
        if (stalls[i] - last >= dist) {
            cntCows++;
            last = stalls[i];
        }
        if (cntCows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
         int n =  stalls.size();
       sort(stalls.begin(), stalls.end());
       int low  = 0, high = stalls[n-1] - stalls[0];
            while(low<=high){
                int mid = (low+high)/2;
                    if(CanwePlace(stalls, mid, k) == true) {
                        low = mid +1;
                    }
                    else{
                        high = mid -1;
                    }
            }
            return high;
}