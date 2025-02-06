// Leetcode 134. Find Minimum in Rotated Sorted Array

#include <bits/stdc++.h> 
using namespace std;

 int findMin(vector<int>& nums){
    int n = nums.size();
    int low = 0, high = n-1;
    int ans = INT_MAX;

    while (low<=high){
        int mid = (high - low )/2 ; 

            if(nums[low] < nums[high]){
                ans = min(ans, nums[low]);
                break;
            }
            // left part is sorted
        if(nums[low] <= nums[mid]){
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        // right part is sorted

        else{
            ans = min(ans, nums[mid]);

              high = mid - 1;
        }
    }
    return ans;
 }
