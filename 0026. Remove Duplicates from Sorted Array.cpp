//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80500742

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        if(nums.size()==0) return 0;
     for(int i=1;i<nums.size();i++){
         if(nums[i]!=nums[k-1])
             nums[k++]=nums[i];
     }
        return k;
    }
};
