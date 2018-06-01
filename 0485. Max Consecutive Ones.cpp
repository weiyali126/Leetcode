//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80539811

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,temp=0;
        bool flag=false;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=1) {ans=max(ans,temp);temp=0;}
            else{
                temp++;
            }
        }
        ans=max(ans,temp);
        return ans;
    }
};
