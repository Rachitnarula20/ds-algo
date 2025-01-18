#include <bits/stdc++.h> 
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int maxlen = 0;
    int sum = 0;
    map<int, int> presumMap ;
        for(int i = 0; i<n; i++){
          sum += arr[i];  
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        int rem = sum - k ;
        if(presumMap.find(rem) != presumMap.end()){
            int len = i - presumMap[rem];
            maxlen = max(maxlen, len);
        }
        if(presumMap.find(sum) == presumMap.end()){
            presumMap[sum] = i;
        }
    }
    return maxlen;
}