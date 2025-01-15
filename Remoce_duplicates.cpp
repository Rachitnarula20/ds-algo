#include <bits/stdc++.h> 
using namespace std;

 int removeDuplicates(vector<int>& nums) {
    int i = 0;
    int n = nums.size();
    for (int j = 0; j < n; i++)
    {
        if(nums[i] != nums[j]){
            nums[i] = nums[j];
            i++;
        }
    }
    return i+1;
    
 }