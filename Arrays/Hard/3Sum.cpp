#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums){
    int n = nums.size();
    set <vector<int>>st;
    for(int i = 0; i < n; i++){
            set<int> hashset;
        for (int j = i+1;j < n; j++){
          int k = -(nums[i] + nums[j]);
          if(hashset.find(k) != hashset.end()){
            vector<int> temp = {nums[i], nums[j], k};
            sort(temp.begin(), temp.end());
            st.insert(temp);
          }
          hashset.insert(j);
        }
        vector<vector<int>> ans(st.begin(), st.end());
    return ans;
    }
 }