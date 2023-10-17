void subseq(int idx,string s,vector<string>&s1,string &str)
{
    int len=s.length();
    if(idx>=len)
    {
    s1.push_back(str);
    return;
    }
    //take
    str=str+s[idx];
    subseq(idx+1,s,s1,str);
    //not take
    str.pop_back();
    subseq(idx+1,s,s1,str);
}
vector<string> generateSubsequences(string s)
{
    // Write your code here.
    vector<string>s1;
    string str="";
    subseq(0,s,s1,str);
    return s1;
}
