//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80600172

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size(),cnt=1,mx=1;
        if(n==0) return 0;
        for(int i=1;i<n;++i){
            if(nums[i]>nums[i-1]) 
                ++cnt;
            else cnt=1;
            mx=max(mx,cnt);
        }
        return mx;
    }
};
