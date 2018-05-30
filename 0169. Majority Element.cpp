//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80513017

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0],cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                major=nums[i];
            }else if(major==nums[i]) {
                cnt++;
            }else cnt--;
        }
        return major;
    }
};
