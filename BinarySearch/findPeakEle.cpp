int findPeakElement(vector<int> &arr) {
    // Write your code here
    if(arr.size()==1)  
    return 0;
    if(arr[0]>arr[1])  
    return 0;
    int n=arr.size();
    if(arr[n-1]>arr[n-2])   return n-1;
    int low=1,high=arr.size()-2;
    while (low <= high) {
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;
        //else if(arr[mid]<arr[mid+1])
        //high=mid-1;
        if(arr[mid-1]<arr[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
