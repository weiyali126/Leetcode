//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80516624

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            map<int,int> mp;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
            if(mp[nums[i]]==2)
                return true;
        }
        return false;
    }
};
