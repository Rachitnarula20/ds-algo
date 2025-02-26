// Allocate Books Coding Ninjas

#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int>& arr, int pages){
    long long pageStudent = 0;
    int students = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(pageStudent + arr[i] <= pages){
                pageStudent += arr[i];
        }
        else
        {
            students ++;
            pageStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int>& arr, int n, int m){
    if(m>n) return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(),0);

    while(low<high){
        int mid = (high-low)/2;
        int students = countStudents(arr, mid);
        if(students > m){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return low;
}