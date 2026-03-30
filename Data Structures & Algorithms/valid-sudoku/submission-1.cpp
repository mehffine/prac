class Solution {
public:

    bool box(int starti,int startj,vector<vector<char>>&board){
        set<char> box;
        for(int i =starti; i<starti+3; i++){
            for(int j= startj; j<startj+3; j++){
                if((board[i][j])=='.') continue;
                if(box.find(board[i][j])!=box.end()) return false;
                box.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // validate rows
        for(int i=0; i<9; i++){
            set<char> row;
            for(int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                if(row.find(board[i][j])!=row.end()) return false;
                row.insert(board[i][j]);
            }
        }
        //validate columns
        for(int i=0; i<9; i++){
            set<char> col;
            for(int j=0; j<9; j++){
                if(board[j][i]=='.') continue;
                if(col.find(board[j][i])!=col.end()) return false;
                col.insert(board[j][i]);
            }
            
        }
        //validate box
        for(int i=0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                if(box(i,j,board)==false) return false;
            }
        }
        
    return true;
    }
};
