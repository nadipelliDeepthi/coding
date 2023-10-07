int validSt(int mid, int m, vector<int> &arr) {
    int pages=0,st=1;
    for (int i = 0; i < arr.size(); i++) {
        //pages=pages+arr[i];
        if((pages+arr[i])<=mid)
        {
            pages=pages+arr[i];
        } else {
            st++;
            pages=arr[i];
        }
    }
    return st;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n)
    return -1;
    int low=INT_MIN,high=0,ans;
    for (int i = 0; i < arr.size(); i++) {
        low=max(low,arr[i]);
        high=high+arr[i];
    }
   // cout<<low<<' '<<high;
    while (low <= high) {
        int mid=(high+low)/2;
        int stu=validSt(mid,m,arr);
        if (stu>m) {
            low=mid+1;
        }
        else
        high=mid-1; 
        
    }
    return low;
   
}

