#include<bits/stdc++.h>

int split(vector<int> a, int mid){
    int count =1 , maxallocation = 0;
    for(int i = 0 ;i< a.size();i++){
        if(maxallocation + a[i] <= mid){
            maxallocation += a[i];
        }else{
            count++;
            maxallocation= a[i];
        }
    }
    return count;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    int n = a.size();
    if(k > n) return -1;
    int low = *max_element(a.begin(), a.end());
    int high = accumulate(a.begin(), a.end(), 0);
    while(low <= high){
        int mid = (low +high)/2;
        if(split(a, mid) > k) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}