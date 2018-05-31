//题目与解题思路参考我的博客：https://blog.csdn.net/vir_lee/article/details/80530092

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();++i){
                st.insert(nums[i]);
                if(st.size()>3)
                  st.erase(st.begin());
        }
        
        if(st.size()==2)   st.erase(st.begin());
        return *(st.begin());
    }
};
