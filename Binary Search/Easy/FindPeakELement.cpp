#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums){
    int n = nums.size();
    int low = 0, high = n-1;

    if(n == 0) return 0;

        while(low < high){
            int mid = low + (high-low)/2;
            if(nums[mid] < nums[mid + 1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
} 