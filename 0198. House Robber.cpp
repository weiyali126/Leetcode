You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
Example 1:
Input: [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.
Example 2:
Input: [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
             Total amount you can rob = 2 + 9 + 1 = 12.


题意：给定一个数组表示每个商店的钱数，让你计算最大抢劫金额，注意由于每家商店都有报警装置，不能连续抢劫两家相邻的商店，否则会引发报警。

思路：

1.动态规划问题，设置数组dp[i]表示到当前位置能够抢劫到的最大金额，则有状态转移方程dp[i]=max(dp[i-1],dp[i-2]+nums[i]);

2.注意数组长度为0，1，2时特别判断。
参考代码：

class Solution {

public:

    int rob(vector<int>& nums) {

        int n=nums.size();

        vector<int> dp(n,0);

        if(n==0) return 0;       

        if(n==1) return nums[0];

        if(n==2) return max(nums[0],nums[1]);

        dp[0]=nums[0];

        dp[1]=max(nums[0],nums[1]);      

        for(int i=2;i<n;++i){

            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);

        }

        return dp[n-1];

    }

};
