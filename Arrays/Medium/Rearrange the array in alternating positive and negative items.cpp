 #include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> res;
        res.reserve(n);  // Optional, to avoid repeated allocations
        
        // Separate the positive and negative numbers
        for(int i = 0; i < n; i++){
            if(nums[i] > 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }
        
        // Alternate between pos and neg
        for(int j = 0; j < pos.size(); j++){
            res.push_back(pos[j]);
            res.push_back(neg[j]);
        }
        
        return res;
    }
};
