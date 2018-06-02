//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80551414

//法一：使用map，时间复杂度O（N），空间复杂度O（N）

class Solution {  
public:  
    int findPairs(vector<int>& nums, int k) {  
       unordered_map<int,int> mp;  
        if(k<0) return 0;  
        int n=nums.size(),ans=0;  
        for(int i=0;i<n;++i){  
            mp[nums[i]]++;  
        }  
        for(auto it=mp.begin();it!=mp.end();++it){  
            if(k==0&&it->second>=2)   
                ans++;  
            else if(k!=0&&mp.find((it->first)+k)!=mp.end())  
                ans++;  
        }  
        return ans;  
    }  
};  

//法二：使用two pointers ，时间复杂度：O（nlogn），空间复杂度O（1）

class Solution {  
public:  
    int findPairs(vector<int>& nums, int k) {  
       sort(nums.begin(),nums.end());  
        int ans=0;  
        for(int i=0,j=1;i<nums.size()-1&&j<nums.size();j=max(j,i+1)){  
            if(nums[j]-nums[i]==k){  
                ans++;  
                while(i<nums.size()-1&&nums[i]==nums[i+1]) ++i;  
                ++i;  
                while(j<nums.size()&&nums[j]==nums[j+1]) ++j;  
                ++j;  
            }else if(nums[j]-nums[i]>k){  
                while(i<nums.size()-1&&nums[i]==nums[i+1]) ++i;  
                ++i;  
            }else{  
                while(j<nums.size()&&nums[j]==nums[j+1]) ++j;  
                ++j;  
            }  
        }  
        return ans;  
    }  
};  
