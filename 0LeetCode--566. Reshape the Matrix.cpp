//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80537094

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n=nums.size(),m=nums[0].size();
        if(n*m!=r*c) return nums;
        vector<vector<int>> ans(r);
        int row=0;
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j){
                ans[row].push_back(nums[i][j]);
                if(ans[row].size()==c) ++row;
            }
        }
        return ans;
    }
};
