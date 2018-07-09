Give a string s, count the number of non-empty (contiguous) substrings that have the same number of 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively. 
Substrings that occur multiple times are counted the number of times they occur.
Example 1:
Input: "00110011"
Output: 6
Explanation: There are 6 substrings that have equal number of consecutive 1's and 0's: "0011", "01", "1100", "10", "0011", and "01".

Notice that some of these substrings repeat and are counted the number of times they occur.

Also, "00110011" is not a valid substring because all the 0's (and 1's) are not grouped together.

Example 2:
Input: "10101"
Output: 4
Explanation: There are 4 substrings: "10", "01", "10", "01" that have equal number of consecutive 1's and 0's.

Note:
s.length will be between 1 and 50,000.s will only consist of "0" or "1" characters.



题意：给定一串序列，其中只包含0和1，让你统计其中包含0和1的特定序列（序列中的0和1必须是连续的）一共有多少个，可以重复统计如序列0011，满足条件的序列有01和0011.

思路：


1.使用变量k遍历序列，然后使用双指针i，j来判断当前序列是否满足条件，若满足计数器cnt加一，然后--i，++j，继续判断，直到倒数第二个为止。
2.注意每轮第一组符合条件的序列特殊处理。
参考代码：

class Solution {

public:

    int countBinarySubstrings(string s) {

        int cnt=0,k=0,i,j,n=s.size();

        for(;k<n-1;++k){

            if(s[k]==s[k+1]) continue;

            i=k;

            j=k+1;

            while(i>=0&&j<n){

                if(i+1!=j&&(s[i]!=s[i+1]||s[j]!=s[j-1]))    //第一组特殊处理，判断i+1！=j

                    break;

                cnt++;

                --i;++j;

            }

        }

        return cnt;

    }

};
