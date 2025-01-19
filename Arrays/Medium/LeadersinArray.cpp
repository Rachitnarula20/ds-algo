#include <bits/stdc++.h> 
using namespace std;


vector<int> leaders(vector<int>& arr){
    int n = arr.size();
    int largest = INT_MIN;
    vector <int> ans;

    for(int i = n-1; i>=0;i--){
        if(arr[i] > largest){
            ans.push_back(arr[i]);
            largest = arr[i];
        }
    }
    reverse(arr.begin(), arr.end());
    return ans;   
}