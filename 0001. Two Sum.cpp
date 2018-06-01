//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80517106

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){  
            if(mp.find(target-nums[i])!=mp.end()){
                ans[0]=min(i,mp[target-nums[i]]);
                ans[1]=max(i,mp[target-nums[i]]);
                return ans;
            }  
            mp[nums[i]]=i;
        }
        return ans;
    }
};
