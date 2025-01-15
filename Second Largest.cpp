#include <bits/stdc++.h> 
using namespace std;
 int getSecondLargest(vector<int> &arr){
    int n = arr.size();
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest){
            slargest = largest;
            arr[i] = largest ;
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest ;
 }