#include<bits/stdc++.h>
using namespace std;
int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int maxi=INT_MIN,high=0;
    for (int i = 0; i < v.size(); i++) {
        maxi=max(maxi,v[i]);
    }
    int low=1;
    high=maxi;
    while (low <= high) {
        int mid=(low+high)/2;
        long long tHours=0;
        for (int i = 0; i < v.size(); i++) {
            tHours+=ceil((double)v[i]/(double)mid);
        }
        if(tHours<=h)
        high=mid-1;
        else
        low=mid+1;
    }
    return low;
}
