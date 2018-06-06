//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80601764

class Solution {  
public:  
    int maxAreaOfIsland(vector<vector<int>>& grid) {  
        int m=grid.size(),n=grid[0].size(),mx=0;  
        for(int i=0;i<m;++i){  
            for(int j=0;j<n;++j){  
                int t=0;  
                if(grid[i][j]){  
                    getSum(i,j,m,n,t,grid);  
                }  
                mx=max(mx,t);  
            }  
        }  
        return mx;  
    }  
    void getSum(int i,int j,int m,int n,int& cnt,vector<vector<int>>& grid){  
        if(!(i>=0&&i<m)||!(j>=0&&j<n)||!grid[i][j]) return;  
        cnt++;  
        grid[i][j]=0;  
        getSum(i-1,j,m,n,cnt,grid);  
        getSum(i+1,j,m,n,cnt,grid);  
        getSum(i,j-1,m,n,cnt,grid);  
        getSum(i,j+1,m,n,cnt,grid);  
    }  
};  
