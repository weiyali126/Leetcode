//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80501571

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()+1,sum=0;
        for(int i=0;i<n-1;++i){
            sum+=nums[i];
        }
        return n*(n-1)/2-sum;
    }
};
