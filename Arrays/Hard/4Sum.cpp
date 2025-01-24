#include<bits/stdc++.h>
using namespace std;

  vector<vector<int>> fourSum(vector<int>& nums, int target){
    int n =  nums.size();
    set<vector<int>> st;

        for(int i = 0; i< n;i++){
            for(int j = i+1; j <n;j++){
                set<int>hashset;
                for(int k = j+1; k < n;k++){
                    int sum = nums[i]+nums[j];
                    sum += nums[k]; 
                    int fourth = target - sum;
                    if(hashset.find(fourth) != hashset.end()){
                        vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
  }