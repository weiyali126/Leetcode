//题目与解题思路参考我的博客：https://blog.csdn.net/vir_lee/article/details/80614107

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int mx=0,n=nums.size(),ans=50000;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;++i){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]].push_back(1);
                mp[nums[i]].push_back(i);
                mp[nums[i]].push_back(i);
            }else{
                mp[nums[i]][0]++;
                mp[nums[i]][2]=i;
            }
            mx=max(mx,mp[nums[i]][0]);
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if((it->second)[0]<mx) continue;
            ans=min(ans,(it->second)[2]-(it->second)[1]+1);
        }
        return ans;
    }
};
