#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	// 1 1 1 1 1 2 2 3 3 
	vector<int>vec;
	map<int,int>mp;
        for (auto x : v) {
			mp[x]++;
        }
        for (auto x : mp) {
           if(x.second>floor(v.size()/3))
		   vec.push_back(x.first);
        }
		return vec;
}
