// Leetcode 74. Search in a 2d 

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n = matrix.size();
            int m = matrix[0].size();
    
                int low = 0 ;
                int high = (n*m) -1;
                while(low <= high){
                    int mid = low +(high-low)/2;
                    if(target == matrix[mid/m][mid%m]){
                        return true;
                    }
                    if(target > matrix[mid/m][mid%m]){
                        low = mid + 1;
                    }
                    else{
                        high = mid - 1;
                    }
                }
    return false;
        }
    };