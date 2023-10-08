#include<bits/stdc++.h>
using namespace std;
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	priority_queue<pair<long double,int>>pq;
	vector<int>nOfdiv(arr.size()-1,0);
	for(int i=0;i<arr.size()-1;i++)
	{
          pq.push({arr[i+1]-arr[i] , i});
    }
	long double inDiff,newSecL;
    for (int i = 1; i <= k; i++) {
      auto x=pq.top();
	  pq.pop();
	  int secL=x.second;
	  nOfdiv[secL]++;
	  inDiff=arr[secL+1]-arr[secL];
	  newSecL=(inDiff)/(long double)(nOfdiv[secL]+1);
          pq.push({newSecL,secL});
        }
		//cout<<pq.top().first;

		return pq.top().first;
}
