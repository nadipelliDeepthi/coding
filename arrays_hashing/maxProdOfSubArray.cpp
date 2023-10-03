#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int pref=1,suff=1,ans=INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
			if(pref==0)
			pref=1;
			if(suff==0)
			suff=1;
			pref=pref*arr[i];
			suff=suff*arr[arr.size()-i-1];
            ans = max({ans,pref,suff});
        }
		return ans;
}
