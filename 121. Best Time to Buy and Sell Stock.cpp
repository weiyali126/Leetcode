//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80498617

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,M=0,m=0,n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<prices[m]) {m=i;M=i;}
            if(prices[i]>prices[M]) {
                M=i;
                profit=max(profit,prices[M]-prices[m]);
            }
        }
        return profit;
    }
};
