// class Solution 
// {
//     public:
//         vector<vector<string>> solveNQueens(int n) 
//         {
//             vector<vector<string>> result;
//             vector<string> board(n, string(n, '.'));
//             backtrack(0, n, board, result);
//             return result;
//         }
    
//     private:
//         void backtrack(int row, int n, vector<string>& board, vector<vector<string>>& result) 
//         {
//             if (row==n) 
//             {
//                 result.push_back(board);
//                 return;
//             }

//             for (int col=0;col<n;col++) 
//             {
//                 if (isSafe(row, col, n, board)) 
//                 {
//                     board[row][col] = 'Q';
//                     backtrack(row + 1, n, board, result);
//                     board[row][col] = '.';
//                 }
//             }
//         }
    
//         bool isSafe(int row, int col, int n, vector<string>& board) 
//         {
//             for (int i=0;i<row;i++) 
//             {
//                 if (board[i][col]=='Q') 
//                 {
//                     return false;
//                 }
//             }
//             for (int i=row-1,j=col-1;i>=0 && j>=0;i--,j--) {
//                 if (board[i][j]=='Q') 
//                 {
//                     return false;
//                 }
//             }
//             for (int i=row-1,j=col+1;i>=0 && j<n;i--,j++) 
//             {
//                 if (board[i][j]=='Q') 
//                 {
//                     return false;
//                 }
//             }
//             return true;
//         }
// };