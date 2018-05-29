//题目与思路解析参考我的博客：167. Two Sum II - Input array is sorted

class Solution {  
public:  
    vector<int> twoSum(vector<int>& numbers, int target) {  
        vector<int> ans(2);  
        int i=0,j=n-1;  
        while(i<j){  
            while(numbers[j]>target-numbers[i]) --j;  
            if(numbers[j]==target-numbers[i]){  
                ans[0]=i+1;  
                ans[1]=j+1;  
                return ans;  
            }else   ++i;  
        }  
    }  
};  
