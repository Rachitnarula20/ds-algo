#include <bits/stdc++.h> 
using namespace std;
  int largest(vector<int> &arr){
    int n = arr.size();
    int max = 0;
    for (int i = 0; i < n; i++)
    {
     if(arr[0] > max){
      max = arr[0];
     }
    }
    return max;
  }