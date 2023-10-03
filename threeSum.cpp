vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>>vec;
    // To apply two pointers we must sort the array
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); i++) {

        if(i!=0 && arr[i]==arr[i-1])   // To skip the duplicates by checking adj elements 
        continue;
        int j=i+1,k=n-1;
        while (j < k) {
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0)   j++;
            else if(sum>0)  k--;
            else {
              vector<int> ans = {arr[i],arr[j],arr[k]};
              vec.push_back(ans);
              j++;
              k--;
              while(j<k && arr[j]==arr[j-1])  j++;
               while(j<k && arr[k]==arr[k+1])  k--;
            }
        }
    }
    return vec;
}
