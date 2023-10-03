#include<bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    vector<int>vec;
    int n=a.size();
    //sort(a.begin(),a.end());
    long long x=0;
    for (int i=0;i<a.size();i++)
    {
      x=x^a[i];
      x=x^(i+1);
    }
    int diff=x&~(x-1);
    int one=0,zero=0;
    for (int i = 0; i < n; i++) {
        if((diff & a[i])!=0)
        one=one^a[i];
        else
        zero=zero^a[i];
    }
    for (int i = 1; i <= n; i++) {
        if((i&diff )!=0 )
        one=one^i;
        else
        zero=zero^i;
    }
    int c=0;
    for (int i = 0; i < n; i++) {
     if(a[i]==one)
     c++;
    }
    if(c==2)
     return {one,zero};
    return {zero,one};
}
