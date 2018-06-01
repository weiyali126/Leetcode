//题目与解题思路参考我的博客：

法一： T：O（NlogN），S:O（N）
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int> v=nums;
        sort(v.begin(),v.end());
        while(i<nums.size()&&nums[i]==v[i]) ++i;
       if(i==nums.size()) return 0;
        while(j>0&&nums[j]==v[j]) --j;
        return j-i+1;
    }
};

法二：T:O{N），S：O（1）
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size(),mx=nums[0],mn=nums[n-1],l=0,r=-1;
        for(int i=0;i<n;++i){   
            mx=max(mx,nums[i]);
            if(nums[i]<mx) r=i;
            
        }
        for(int i=n-1;i>=0;--i){
           mn=min(mn,nums[i]);
            if(nums[i]>mn) l=i;
        }
        return r-l+1;
    }
};
