#include <bits/stdc++.h> 
int taskScheduler(string tasks, int n, int t) {
    // Write your code here
    if(t==0)
    return tasks.length();
    priority_queue<pair<int,char>>pq;
    unordered_map<char,int>mp;
    for (auto x : tasks) {
      mp[x]++;
    }
    for (auto x : mp) {
      pq.push({x.second,x.first});
    }
    int ans=0;
    while (!pq.empty()) {
        //if all the characters in the string are unique
      if (pq.top().first == 1) {
          ans=ans+pq.size();
          return ans;
      }
      vector<pair<int,char>>vec;
      for (int i = 0; i <= t; i++) {
          if (!pq.empty()) {
            vec.push_back(pq.top());
            pq.pop();
          }
          ans++;
      }
      for(auto x:vec)
      {
          if(x.first>1)
            pq.push({x.first - 1,x.second});
      }
    }
    return ans;
}





