// Leetocode 34. Find First and Last Position of Element in Sorted Array


#include <bits/stdc++.h> 
using namespace std;

int FirstOccurance(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0, high = n - 1;
    int first = -1;
   while (low <= high)
   {
   int mid = low + (high - low) / 2; 
    if (nums[mid] == target)
    {
        first = mid;
        high = mid - 1;
    }
    else if(nums[mid] > target){
        high = mid -1 ;
    }
    else low = mid + 1;
    
   }
   return first;
}

int LastOccurance (vector<int>& nums, int target){
    int n = nums.size();
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high)
   {
   int mid = low + (high - low) / 2; 
   if(nums[mid] == target){
    last = mid;
    low = mid + 1;
   }
   else if (nums[mid] > target)
   {
    high = mid - 1;
   }
   else low = mid + 1;
   
   }
   return last;
}


vector<int> searchRange(vector<int>& nums, int target) {
    int first = FirstOccurance(nums, target);
    int last = LastOccurance(nums, target);

    if (first == -1) return {-1, -1};

    return {first, last};
}