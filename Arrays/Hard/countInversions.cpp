#include<bits/stdc++.h>
using namespace std;

int inversionCount(vector<int> &arr){
    int n = arr.size();
  int cnt = 0; 
 for (int i = 0; i < n; i++)
 {
    for (int j = i+1; i < n; j++)
    {
        if(arr[i] >  arr[j]) cnt ++;
    }
    
 }
 return cnt;
   
}