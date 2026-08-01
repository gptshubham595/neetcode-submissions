class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int r[9][9]={0};
        int c[9][9]={0};
        int box[3][3][9]={0};

        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                if(b[i][j]=='.')
                    continue;
                int n=b[i][j]-'1';
                if(r[i][n]++ || c[j][n]++ || box[i/3][j/3][n]++)
                    return 0;
            }
        }
        return 1;

    }
};
