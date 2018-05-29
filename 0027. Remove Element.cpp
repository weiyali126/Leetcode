//题目与具体思路参考我的博客：https://blog.csdn.net/vir_lee/article/details/80497824

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),k=0;
        for(int i=0;i<n;i++) if(nums[i]!=val) nums[k++]=nums[i];
        return k;
    }
};
