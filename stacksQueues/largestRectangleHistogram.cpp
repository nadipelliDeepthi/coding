 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   stack<int>st;
   int n=heights.size();
   vector<int>leftsm(n),rightsm(n);
   for(int i=0;i<heights.size();i++)
   {
     while(!st.empty() && heights[st.top()]>=heights[i])
     {
           st.pop();
     }
     if(st.empty())
     leftsm[i]=0;
     else
     leftsm[i]=st.top()+1;
     st.push(i);
   }
   while (!st.empty()) {
     st.pop();
   }
   for(int i=n-1;i>=0;i--)
   {
     while(!st.empty() && heights[st.top()]>=heights[i])
     {
           st.pop();
     }
     if(st.empty())
     rightsm[i]=n-1;
     else
     rightsm[i]=st.top()-1;
     st.push(i);
   }
   while (!st.empty()) {
     st.pop();
   }
   int ans=0;
   for (int i = 0; i < n; i++) {
     ans=max(ans,(rightsm[i]-leftsm[i]+1)*heights[i]);
   }
   return ans;
 }
