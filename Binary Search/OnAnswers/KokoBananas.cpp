// 875. Koko Eating Bananas Leetcode

#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int totalHours = 0;
            
            for (int pile : piles) {
                totalHours += (pile + mid - 1) / mid; // Equivalent to ceil(pile / mid)
            }
            
            if (totalHours <= h) {
                right = mid; // Try to find a smaller possible k
            } else {
                left = mid + 1; // Current k is too small, increase it
            }
        }
        
        return left;
    }