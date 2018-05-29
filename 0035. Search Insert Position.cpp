//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80473262

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),i=0,j=n,mid;
        while(i<j){
            mid=(i+j)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) j=mid;
            else i=mid+1;
        }
        return i;
    }
};
