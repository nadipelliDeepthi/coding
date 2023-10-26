long long getTrappedWater(long long* arr, int n) {
    // Write your code here.
  //  stack<long long>st1,st2;
    long long val=arr[0],sum=0;
    //st.push()vec
    vector<long long>vec1(n,-1),vec2(n,-1);
    vec1[0]=arr[0];
    for (long long i = 1; i < n; i++) {
      vec1[i]=max(vec1[i-1],arr[i]);
    }
    vec2[n-1]=arr[n-1];
    for (long long i = n-2; i >=0; i--) {
      vec2[i]=max(vec2[i+1],arr[i]);
    }
    /*for(auto x:vec1)
    cout<<x<<" ";
    cout<<"\n";
    for(auto x:vec2)
    cout<<x<<" ";
    cout<<"\n";*/
    for (long long i = 0; i < n; i++) {
      long long minVal=min(vec1[i],vec2[i]);
      //if(vec1[i]!=-1 && vec2[i]!=-1)
      sum+=(minVal-arr[i]);
    }
    return sum;
} 
