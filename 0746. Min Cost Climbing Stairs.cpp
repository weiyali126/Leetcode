On a staircase, the i-th step has some non-negative cost cost[i] assigned (0 indexed).
Once you pay the cost, you can either climb one or two steps. You need to find minimum cost to reach the top of the floor, and you can either start from the step with index 0, or the step with index 1.
Example 1:
Input: cost = [10, 15, 20]
Output: 15
Explanation: Cheapest is start on cost[1], pay that cost and go to the top.

Example 2:
Input: cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
Output: 6
Explanation: Cheapest is start on cost[0], and only step on 1s, skipping cost[3].

Note:
cost will have a length in the range [2, 1000].
Every cost[i] will be an integer in the range [0, 999].



题意：给定一数组表示一组台阶，其中的每一个数字表示这个台阶的代价，问你从下标0或者1出发，爬上顶楼的最小代价是多少，每个数字表示一个台阶，跳过最后一个数字才是顶楼。

思路：

1.这是一个最优化问题，具有最优子结构，可以通过最优子结构，递推出全局最优解。

2.使用动态规划解决。设置数组dp[]表示到当前的最小代价值，状态转移方程是dp[i]=min(dp[i-1],dp[i-2])+cost[i];
参考代码：
 
class Solution {  
public:  
    int minCostClimbingStairs(vector<int>& cost) {  
        int cnt=0,n=cost.size();  
        vector<int> dp(n,0);  
        dp[0]=cost[0];  
        dp[1]=cost[1];  
        for(int i=2;i<n;++i){  
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];  
        }  
        return min(dp[n-1],dp[n-2]);  
    }  
}; 

优化：空间复杂度降至O（1）
参考代码：

class Solution {  
public:  
    int minCostClimbingStairs(vector<int>& cost) {  
        int cnt=0,n=cost.size();  
        vector<int> dp(3,0);  
        dp[0]=cost[0];  
        dp[1]=cost[1];  
        for(int i=2;i<n;++i){  
            dp[2]=min(dp[0],dp[1])+cost[i];  
            dp[0]=dp[1];dp[1]=dp[2];  
        }  
        return min(dp[0],dp[1]);  
    }  
};  
