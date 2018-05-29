//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80497267

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),i=0,k=0;
        for(int i=0;i<n;++i){
            if(nums[i]!=0){
                nums[k++]=nums[i];
            }
        }
        while(k<n) nums[k++]=0;
    return ;
    }
};
