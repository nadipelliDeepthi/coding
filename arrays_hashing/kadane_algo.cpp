long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxsum=0,maxi=0;
    for (int i = 0; i < arr.size(); i++) {
        maxsum=maxsum+arr[i];
        if(maxsum<0)
        maxsum=0;
        maxi=max(maxi,maxsum);
    }
   return maxi;
}
