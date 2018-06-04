//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80571984

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        partial_sort(nums.begin(),nums.begin()+3,nums.end(),greater<int>());
        int t1=nums[0]*nums[1]*nums[2],Max=nums[0];
        partial_sort(nums.begin(),nums.begin()+2,nums.end(),less<int>());
        int t2=nums[0]*nums[1]*Max;
        return t1>t2?t1:t2;
    }
};
