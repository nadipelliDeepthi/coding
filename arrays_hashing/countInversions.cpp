int merge(vector<int> &a, int low, int mid, int high) {
    int left=low;
    int right=mid+1,ans=0;
    vector<int>temp;
    while (left <= mid && right <= high) {
      if (a[left] <= a[right]) {
        temp.push_back(a[left]);
        left++;
      } else {
          temp.push_back(a[right]);
          ans=ans+(mid-left+1);
          right++;
      }
    }
    while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        a[i]=temp[i-low];
    }
    return ans;
}
int mergeSort(vector<int> &a, int low, int high) {
    int ans=0;
    if(low>=high)
    return ans;
    int mid=(low+high)/2;
    ans=ans+mergeSort(a,low,mid);
    ans=ans+mergeSort(a,mid+1,high);
    ans=ans+merge(a,low,mid,high);
    return ans;
}
int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    return mergeSort(a,0,n-1);
}
