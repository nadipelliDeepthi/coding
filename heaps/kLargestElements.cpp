#include<bits/stdc++.h>
vector<int> kLargest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int>pq;
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }
    vector<int>vec;
    while (k--) {
       vec.push_back(pq.top());
       pq.pop();
    }
    return vec;
}
