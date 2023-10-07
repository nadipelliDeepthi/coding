double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	/*long long p1=0,p2=0;
	long long s1=a.size(),s2=b.size();
	long long med1=0,med2=0,c=0;
    long long med=ceil((double)(s1+s2)/(double)2);
        while (p1 < s1 && p2 < s2) {
          if (a[p1] < b[p2]) {
			  c++;
			  if(c==med)
			  {
				  med1=a[p1];
			  }
			  if((s1+s2)%2==0 && c==med+1)
			  med2=a[p1];
			  p1++;
          } else if (b[p2] < a[p1]) {
			  c++;
			  if(c==med)
			  {
				  med1=b[p2];
			  }
			  if((s1+s2)%2==0 && c==med+1)
			  med2=b[p2];
			  p2++;
          } else {
			  c=c+2;
			  if(c==med)
			  {
				  med1=b[p2];
			  }
			  if((s1+s2)%2==0 && c==med+1)
			  med2=b[p2];
			  p2++;
			  p1++;
          }
        }
        while (p1 < s1) {
			c++;
			  if(c==med)
			  {
				  med1=a[p1];
			  }
			  if((s1+s2)%2==0 && c==med+1)
			  med2=a[p1];
			  p1++;
        }
        while (p2 < s2 ){
			c++;
			  if(c==med)
			  {
				  med1=b[p2];
			  }
			  if((s1+s2)%2==0 && c==med+1)
			  med2=b[p2];
			  p2++;
        }
		double m;
		if((s1+s2)%2==0)
                 m=((double)med1+(double)med2)/2;
				else
				m=(double)med1;
		return m;*/     //TC:size of array1+size of array2
    int n1=a.size(),n2=b.size();
	if(n2>n1)
	return median(b,a);
	int siz=a.size()+b.size();
	
	int le=(siz+1)/2;
	int low=0,high=n1;
	int l1=INT_MIN,l2=INT_MIN,r1=INT_MAX,r2=INT_MAX;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int mid2=le-mid;
        if(mid<n1) 
		r1=a[mid];
		if(mid2<n2)
		r2=b[mid2];
		if(mid-1>=0)
		l1=a[mid-1];
		if(mid2-1>=0)
		l2=b[mid2-1];
                if (l1 <= r2 && l2 <= r1) {
					if(siz%2==0)
					return (double)(max(l1,l2)+min(r1,r2))/2.0;
					else
					return max(l1,l2);
                }
				else if(l1>r2)
				high=mid-1;
				else
				low=mid+1;
        }
    return -1;
}
