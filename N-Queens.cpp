vector<vector<string>>pos;
    bool CheckValid(int row,int col,vector<string>&grid,int n){
        int row1=row,col1=col;
        for (int i=0;i<col;i++){
        if (grid[row][i]=='Q')
        return false;
        }
        for (int i=0;i<row;i++)
        {
            if (grid[i][col]=='Q')
            return false;
        }
        while(row>-1 && col>-1){
            if (grid[row--][col--]=='Q')
            return false;
        }
        while(row1>-1 && col1<n){
            if (grid[row1--][col1++]=='Q')
            return false;
        }
        return true;
        
         
    }
    void ValidQueen(int row,int n,vector<string>& grid){
        if (row==n){
            pos.push_back(grid);
            return ;
        }
        for (int i=0;i<n;i++){
            if (CheckValid(row,i,grid,n)){
            grid[row][i]='Q';
            ValidQueen(row+1,n,grid);
            grid[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string dot(n,'.'); //[....]
        vector<string>grid(n,dot);
        ValidQueen(0,n,grid);
        return pos;
    }
