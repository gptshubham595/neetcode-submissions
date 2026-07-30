class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int r[9][9]={0};
        int c[9][9]={0};
        int box[3][3][9]={0};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]=='.') continue;
                int n= b[i][j]-'1';
                if(r[i][n]++ || c[n][j]++ || box[i/3][j/3][n]++)
                    return false; 
            }
        }

        return 1;
      
    }
};
