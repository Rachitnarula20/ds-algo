// Gfg Ceil The Floor

#include <bits/stdc++.h> 
using namespace std;

int Floor(int x, vector<int> &arr) {
    int n = arr.size();
    int f = -1; // Initialize floor index
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Correct mid calculation
        if (arr[mid] <= x) {
            f = mid; // Update floor index
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return f; // Return floor index
}

int Ceil(int x, vector<int> &arr) {
    int n = arr.size();
    int c = -1; // Initialize ceil index
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Correct mid calculation
        if (arr[mid] >= x) {
            c = mid; // Update ceil index
            high = mid - 1; // Search in the left half
        } else {
            low = mid + 1; // Search in the right half
        }
    }

    return c; // Return ceil index
}

vector<int> getFloorAndCeil(int x, vector<int> &arr) {
    // Sort the array for binary search
    sort(arr.begin(), arr.end());

    // Find floor and ceil indices
    int f = Floor(x, arr);
    int c = Ceil(x, arr);

    // Get floor and ceil values
    int floorValue = (f != -1) ? arr[f] : -1;
    int ceilValue = (c != -1) ? arr[c] : -1;

    return {floorValue, ceilValue};
}