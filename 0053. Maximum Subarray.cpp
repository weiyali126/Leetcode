//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80503019

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre=nums[0],Maxv=nums[0];
        if(nums.size()==1) return Maxv;
        for(int i=1;i<nums.size();i++){
            pre=max(nums[i],pre+nums[i]); 
            Maxv=max(Maxv,pre);
        }
        return Maxv;
    }
};
