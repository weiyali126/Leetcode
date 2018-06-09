A 3 x 3 magic square is a 3 x 3 grid filled with distinct numbers from 1 to 9 such that each row, column, and both diagonals all have the same sum.
Given an grid of integers, how many 3 x 3 "magic square" subgrids are there?  (Each subgrid is contiguous).
 
Example 1:
Input: [[4,3,8,4],
        [9,5,1,9],
        [2,7,6,2]]
Output: 1
Explanation: 
The following subgrid is a 3 x 3 magic square:
438
951
276

while this one is not:
384
519
762

In total, there is only one magic square inside the given grid.
Note:
1 <= grid.length <= 10
1 <= grid[0].length <= 10
0 <= grid[i][j] <= 15


题意：给定一个二维矩阵，问你一共有几个3*3魔法矩阵.（3*3魔法矩阵定义为：矩阵内每个元素数字范围在1--9之间，并且每行每列以及两条对角线之和均相等）


思路：

1.逐个矩阵判断即可。
参考代码：

class Solution {  
public:  
    int numMagicSquaresInside(vector<vector<int>>& grid) {  
        int row=grid.size(),col=grid[0].size(),cnt=0;  
          
        for(int i=0;i<row-2;++i){  
            for(int j=0;j<col-2;++j){  
                if(islegal(i,j,grid)){  
                    cnt++;  
                }    
            }  
        }  
        return cnt;  
    }  
    bool islegal(int i,int j,vector<vector<int>>& grid){  
         for(int r=i;r<i+3;++r){  
            for(int c=j;c<j+3;++c){  
                if(!(grid[r][c]>=1&&grid[r][c]<=9))  
                 {  
                     return false;  
                 }  
            }  
         }  
        vector<int> v(8);  
        v[0]=grid[i][j]+grid[i][j+1]+grid[i][j+2];  
        v[1]=grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2];  
        v[2]=grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];  
        v[3]=grid[i][j]+grid[i+1][j]+grid[i+2][j];  
        v[4]=grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1];  
        v[5]=grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2];  
        v[6]=grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2];  
        v[7]=grid[i+2][j]+grid[i+1][j+1]+grid[i][j+2];  
        for(int k=0;k<7;++k){  
            if(v[k]!=v[k+1])  
                return false;  
        }  
        return true;  
    }  
};  
