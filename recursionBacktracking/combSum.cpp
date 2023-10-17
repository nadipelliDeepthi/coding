void rec(int idx,int tar,vector<int> &ARR,vector<vector<int>>&res,vector<int>&ans)
{
    if(idx==ARR.size())
    {
        if(tar==0)
        {
           //sort(ans.begin(),ans.end());
        /*for(auto x:ans)
        {
        cout<<x<<" ";
        }
        cout<<"\n";*/
        res.push_back(ans);
        }
        return;
    }
    if(ARR[idx]<=tar)
    {
    ans.push_back(ARR[idx]);
    rec(idx,tar-ARR[idx],ARR,res,ans);
    ans.pop_back();
    }
    rec(idx+1,tar,ARR,res,ans);
}
vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    // Write your code here.
    sort(ARR.begin(),ARR.end());
    vector<vector<int>>res;
    vector<int>ans;
    rec(0,B,ARR,res,ans);
    /*for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    return res;
}
