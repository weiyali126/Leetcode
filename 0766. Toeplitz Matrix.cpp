//题目与解题思路参考我的博客：https://blog.csdn.net/vir_lee/article/details/80528813

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size(),column=matrix[0].size();
        for(int i=1;i<row;++i){
            for(int j=1;j<column;++j){
                if(matrix[i][j]!=matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};
