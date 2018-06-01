//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80516234

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            auto it=mp.find(nums[i]);
            if(it!=mp.end()){
                if(i-it->second<=k)
                    return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};
