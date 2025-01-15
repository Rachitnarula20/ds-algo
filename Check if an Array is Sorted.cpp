#include <bits/stdc++.h> 
using namespace std;

int isSorted(int n, vector<int> a){
    for (int i = n - 1; i >= 0; i--)
    {if (a[i] > a[i + 1]) {
        return 0;
    }
}
    return 1; 
}