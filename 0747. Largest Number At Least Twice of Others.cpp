In a given integer array nums, there is always exactly one largest element.
Find whether the largest element in the array is at least twice as much as every other number in the array.
If it is, return the index of the largest element, otherwise return -1.
Example 1:
Input: nums = [3, 6, 1, 0]
Output: 1
Explanation: 6 is the largest integer, and for every other number in the array x,
6 is more than twice as big as x.  The index of value 6 is 1, so we return 1.
 
Example 2:
Input: nums = [1, 2, 3, 4]
Output: -1
Explanation: 4 isn't at least as big as twice the value of 3, so we return -1.
 
Note:
nums will have a length in the range [1, 50].
Every nums[i] will be an integer in the range [0, 99].
 


题意：给定一数组，问你数组中最大的那个数是否比其它的数至少大两倍，如果是返回最大的数的下标，否则返回-1.

思路：

1.一次遍历找到最大的数和次大的数，判断条件即可。
参考代码：

class Solution {  
public:  
    int dominantIndex(vector<int>& nums) {  
        int M=0,pM=0,m=0,pm=0;  
        for(int i=0;i<nums.size();++i){  
            if(nums[i]>m){  
                if(nums[i]>M){  
                     m=M;  
                     M=nums[i];  
                     pm=pM;  
                     pM=i;  
                }else{  
                    m=nums[i];  
                    pm=i;  
                }  
            }  
        }  
        return M>=m*2?pM:-1;  
    }  
};  
