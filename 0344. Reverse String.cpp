Write a function that takes a string as input and returns the string reversed.
Example:
Given s = "hello", return "olleh".


题意：给定一个字符串，逆转后输出。

参考代码：
 
class Solution {  
public:  
    string reverseString(string s) {  
        reverse(s.begin(),s.end());  
        return s;  
    }  
};  
