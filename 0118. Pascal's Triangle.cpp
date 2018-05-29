//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80502580

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;++i) {
            ans[i].resize(i+1,1);
            if(i<2) continue;
            for(int j=1;j<i;++j){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};
