Given an array of integers nums, write a method that returns the "pivot" index of this array.
We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.
If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index.
Example 1:
Input: 
nums = [1, 7, 3, 6, 5, 6]
Output: 3
Explanation: 
The sum of the numbers to the left of index 3 (nums[3] = 6) is equal to the sum of numbers to the right of index 3.
Also, 3 is the first index where this occurs.

Example 2:
Input: 
nums = [1, 2, 3]
Output: -1
Explanation: 
There is no index that satisfies the conditions in the problem statement.

Note:
The length of nums will be in the range [0, 10000].Each element nums[i] will be an integer in the range [-1000, 1000].



题意：给定一个数组，让你找到其枢轴，枢轴定义为该数字左边的元素数值总和等于其右边数字的总和。

思路：

1.开个sum数组，用来记录从左边一直到当前数字元素总和，然后再次遍历，若右边数字总和等于左边返回下标，否则返回-1.

2.注意数组可能为空。
参考代码：

class Solution {  
public:  
    int pivotIndex(vector<int>& nums) {  
        int n=nums.size();  
        vector<int> sum(n);  
        if(n==0) return -1;  
        for(int i=0;i<n;++i){  
            if(i==0) sum[i]=nums[i];  
            else sum[i]=nums[i]+sum[i-1];  
        }  
        for(int i=0;i<n;++i){  
            if((i==0&&sum[n-1]-sum[0]==0)||sum[i-1]==sum[n-1]-sum[i])    //当第一个元素为枢轴时单独判断处理  
                return i;  
        }  
        return -1;  
    }  
};  
