bool check(int board[][9],int r,int c,int k)
{
    for(int i=0;i<9;i++)
    {
        if(board[i][c]==k)
        return false;
        if(board[r][i]==k)
        return false;
        if(board[3*(r/3)+i/3][3*(c/3)+i%3]==k)
        return false;
    }
    return true;
}
bool sudokuSolver(int board[][9]) {
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Don't print output and return output as specified in the question
    */
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]==0)
            {
                for(int k=1;k<=9;k++)
                {
                    if(check(board,i,j,k))
                    {
                    board[i][j]=k;
                    if(sudokuSolver(board)==true)
                    return true;
                    else
                    board[i][j]=0;    //if the placed one is not crct
                    }
                }
                return false;
            }
        }
    }
    return true;
}
