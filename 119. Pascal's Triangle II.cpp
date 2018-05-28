//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80485300
//T:O(N^2),S:O(N)

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<int> ans(n+1,0);
        ans[0]=1;
        for(int i=1;i<=n;++i){
            for(int j=i;j>0;--j){
                ans[j]+=ans[j-1];
            }
        }
        return ans;
    }
};
