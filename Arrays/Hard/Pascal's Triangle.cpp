#include <bits/stdc++.h> 
using namespace std;

vector<int> generaterow(int row){
    int ans = 1 ;
    vector<int> ansrow;
    ansrow.push_back(1);
    for(
        int col = 1; col < row; col++){
        ans = ans*(row-col);
        ans /= col;
        ansrow.push_back(ans);
    }
    return ansrow;
}

vector<vector<int>> generate(int numRows){
    vector<vector<int>> res;
    for(int i = 0; i<= numRows ;i++){
        res.push_back(generaterow(i));
    }
    return res;
}