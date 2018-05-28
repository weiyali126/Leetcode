//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80488998

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        if(k==0) return;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        return ;
    }
};
