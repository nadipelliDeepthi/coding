bool valid(int mid, int k, vector<int> &stalls) {
    int cows=1;
    int prevCow=stalls[0];
    for (int i = 1; i < stalls.size(); i++) {
      if (stalls[i] - prevCow >= mid) {
        cows++;
        prevCow=stalls[i];
      }
    }
    if(cows>=k)
    return true;
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n=stalls.size(),mid,ans=0;
    sort(stalls.begin(),stalls.end());
    int low=0,high=stalls[n-1]-stalls[0];
    while (low <= high) {
        mid=(low+high)/2;
        if (valid(mid, k, stalls)) {
        ans=mid;
        low = mid + 1;
        } else
        high=mid-1;
    }
    return ans;
}
