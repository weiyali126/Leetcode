//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80572710

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double temp=0,sum=0;
        for(int i=0;i<k;++i) temp+=nums[i];
        sum=temp;
        for(int i=k;i<nums.size();++i){
            temp=temp+nums[i]-nums[i-k];
            sum=max(sum,temp);
        }
        return sum/k;
    }
};
