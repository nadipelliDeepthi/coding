#include<bits/stdc++.h>
vector<int> maxSlidingWindow(vector<int> &arr, int n, int k){
    // Write your code here.
    vector<int>vec;
    deque<int>dq;
    for (int i = 0; i < n; i++) {
       if(!dq.empty() && dq.front()==i-k)   //to remove out of bound indices
       dq.pop_front();
       while(!dq.empty() && arr[dq.back()]<arr[i])
       dq.pop_back();
       dq.push_back(i);
       if(i>=k-1)
       vec.push_back(arr[dq.front()]);
    }
    return vec;
}
