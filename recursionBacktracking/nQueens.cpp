void rec(int col,vector<vector<int>>&res,vector<vector<int>>&board,vector<int>&lediag,vector<int>&updiag,vector<int>&downdiag,int n)
{
    if(col==n)
    {
    vector<int>temp;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             temp.push_back(board[i][j]);
         }
    }
    res.push_back(temp);
    return;
    }
    for(int r=0;r<n;r++)
    {
        if(lediag[r]==0 && updiag[n-1+col-r]==0 && downdiag[r+col]==0)
        {
            board[r][col]=1;
            lediag[r]=1;
            updiag[n-1+col-r]=1;
            downdiag[r+col]=1;
            rec(col+1,res,board,lediag,updiag,downdiag,n);
            board[r][col]=0;
            lediag[r]=0;
            updiag[n-1+col-r]=0;
            downdiag[r+col]=0;
        }
    }
}
vector<vector<int>> nQueens(int n)
{
    // Write your code here.
    vector<vector<int>>res;
    vector<vector<int>>board(n,vector<int>(n,0));
    vector<int>lediag(n,0),updiag(2*n-1,0),downdiag(2*n-1,0);
    rec(0,res,board,lediag,updiag,downdiag,n);
    return res;
}
