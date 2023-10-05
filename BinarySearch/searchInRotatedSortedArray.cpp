bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int low=0,high=A.size()-1;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
       // To avoid overflow
       //long long mid=low+((high-low)/2);
        if(A[mid]==key)                        // 1 3 5 6 10
        return true;
        if (A[low]==A[mid] && A[mid]==A[high])
        {
            low=low+1;
            high=high-1;
            continue;
        }
        if(A[low]<=A[mid])
        {
        if (A[low] <= key && key<=A[mid]) {
          high = mid - 1;
        } else
          low = mid + 1;
        }
        else {
          if(A[mid]<=key && key<=A[high])
          low=mid+1;
          else
          high=mid-1;
        }
    }
    return false;
}
