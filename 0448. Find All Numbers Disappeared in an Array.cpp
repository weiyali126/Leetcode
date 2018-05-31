//题目与解题思路参考我的博客：https://blog.csdn.net/vir_lee/article/details/80530897

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();++i){
            int idx=abs(nums[i])-1;
            if(nums[idx]>0) nums[idx]*=-1;
        }
        for(int i=0;i<nums.size();++i){
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    }
};
