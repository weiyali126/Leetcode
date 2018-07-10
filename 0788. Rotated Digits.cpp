X is a good number if after rotating each digit individually by 180 degrees, we get a valid number that is different from X.  Each digit must be rotated - we cannot choose to leave it alone.
A number is valid if each digit remains a digit after rotation. 0, 1, and 8 rotate to themselves; 2 and 5 rotate to each other; 6 and 9 rotate to each other, and the rest of the numbers do not rotate to any other number and become invalid.
Now given a positive number N, how many numbers X from 1 to N are good?
Example:
Input: 10
Output: 4
Explanation: 
There are four good numbers in the range [1, 10] : 2, 5, 6, 9.
Note that 1 and 10 are not good numbers, since they remain unchanged after rotating.
Note:
N  will be in range [1, 10000].


题意：对于一个数字X，如果它满足把该数字的每一位旋转180度，如果该数字依然有效并且不等于原数字，，我们称其为一个好数字。数字中，3，4，7旋转后无效，0，1，8旋转后等于自身，2，5和6，9旋转后等于对应的另一个数。



思路：

1.写一个单独的判断函数，如果数字中包含3，4或7则一定不满足条件，如果数字要发生变化，则至少要有2，5，6或9其中的一个。
参考代码：

class Solution {

public:

    int rotatedDigits(int N) {

        int cnt=0;

        for(int i=1;i<=N;++i){

            if(judge(i)) cnt++;

        }

        return cnt;

    }

    bool judge(int d){

        bool flag=false;

        while(d){

            int t=d%10;

            if(t==3||t==4||t==7) return false;

            else if(t==2||t==5||t==6||t==9) flag=true;

            d/=10;

        }

        return flag;

    }

};
