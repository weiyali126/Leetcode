//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80587561

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int cnt=0,n=nums.size();
        for(int i=1;i<n&&cnt<2;++i){
            if(nums[i]<nums[i-1]){
                cnt++;
                if(i-2<0||nums[i]>=nums[i-2]) nums[i-1]=nums[i];
                else nums[i]=nums[i-1];
            }
        }
        return cnt<2;
    }
};
