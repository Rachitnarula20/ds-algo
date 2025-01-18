#include <bits/stdc++.h> 
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> NumwithIndex;
        int n = nums.size();

        // Store elements and their original indices
        for (int i = 0; i < n; i++) {
            NumwithIndex.push_back({nums[i], i});
        }

        // Sort the array by values
        sort(NumwithIndex.begin(), NumwithIndex.end());

        // Two-pointer approach
        int l = 0, r = NumwithIndex.size() - 1;
        while (l < r) {
            int sum = NumwithIndex[l].first + NumwithIndex[r].first;
            if (sum == target) {
                return {NumwithIndex[l].second, NumwithIndex[r].second};
            } else if (sum < target) {
                l++;
            } else {
                r--; 
            }
        }
        return {}; 
    }
