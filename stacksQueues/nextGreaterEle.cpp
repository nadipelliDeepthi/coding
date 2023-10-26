#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	// Write your code here
	stack<int>st;
	vector<int>vec(n,-1);
        for (int i = 0; i < arr.size(); i++) {
          while (!st.empty() && arr[st.top()] < arr[i]) {
			  vec[st.top()]=arr[i];
			  if(!st.empty())
			  st.pop();
          }
		  st.push(i);
        }
		return vec;
}
