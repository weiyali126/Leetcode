Given a string and an integer k, you need to reverse the first k characters for every 2k characters counting from the start of the string. If there are less than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and left the other as original.

Example:
Input: s = "abcdefg", k = 2
Output: "bacdfeg"

Restrictions: 
The string consists of lower English letters only.
Length of the given string and k will in the range [1, 10000]


题意：给定一个字符串s和一个整数k，让你每间隔k个元素，逆转一次字符串（从头开始先逆转再间隔），如果字符串长度不够k，则全部逆转。
思路：

1。使用计数器cnt来控制当前轮次是否需要逆转，另外注意最后一轮右边界下标可能会超过字符串长度，要能够正确处理。
参考代码：

class Solution {  
public:  
    string reverseStr(string s, int k) {  
        int n=s.size(),cnt=-1;  
        for(int i=0;i<n;i+=k){  
            cnt++;  
            if(cnt%2==1) continue;  
            reverse(s.begin()+i,s.begin()+min(i+k,n));  
        }  
        return s;  
    }  
};  
