Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000. 
Example 1:
Input: "abab"

Output: True

Explanation: It's the substring "ab" twice.

Example 2:
Input: "aba"

Output: False

Example 3:
Input: "abcabcabcabc"

Output: True

Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)



题意：给定一个字符串，让你判断他是否有循环周期，（不包括0和字符串本身长度）。

思路：


1.使用两轮循环，外层循环用来控制字符串循环周期的长度（用k表示），内层循环用来检测周期为k时是否正确。时间复杂度O（n^2),空间复杂度O（1）。
2.如果当前周期长度k不能被字符串长度n整除，说明一定不可能循环，可直接跳过。
参考代码：

class Solution {  
public:  
    bool repeatedSubstringPattern(string s) {  
        int n=s.size();  
        for(int k=1;k<n;++k){  
            if(n%k!=0) continue;  
            for(int i=0,j=i+k;j<n&&s[i]==s[j];++i,++j){  
                if(j==n-1) return true;  
            }  
        }  
        return false;  
   }  
}; 
