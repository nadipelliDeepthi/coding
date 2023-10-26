class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        vector<int>vec;
        //reverse(ast.begin(),ast.end());
        
        for(int i=0;i<ast.size();i++)
        {
            if(ast[i]>0 || st.empty())
             st.push(ast[i]);
            
            else
            {
                while(!st.empty() && st.top() > 0 && st.top() < abs(ast[i])) {
                    st.pop();
                }
                if(st.empty() || st.top()<0)
                {
                    st.push(ast[i]);
                }
                else if((abs(st.top())==abs(ast[i])) && !st.empty())
                {
                    st.pop();
                }
            }
        }
        
        
    while(!st.empty())
    {
        vec.push_back(st.top());
        st.pop();
    }
    reverse(vec.begin(),vec.end());
    return vec;
    }
};
