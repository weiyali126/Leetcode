Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.
Example 1:
Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:
Input: "race a car"
Output: false


题意：给定一个字符串让你判断其中的字母和数字是否回文。

思路：

1.使用two pointers两边扫描。
参考代码：

class Solution {  
public:  
    bool isPalindrome(string s) {  
        int n=s.size(),i=0,j=n-1;  
        if(n<2) return true;  
        while(i<j){  
            while(i<j&&!(s[i]>='A'&&s[i]<='Z')&&!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='0'&&s[i]<='9')) ++i;  
            while(i<j&&!(s[j]>='A'&&s[j]<='Z')&&!(s[j]>='a'&&s[j]<='z')&&!(s[j]>='0'&&s[j]<='9')) --j;  
            if(s[i]>='a'&&s[i]<='z') s[i]-=32;  
            if(s[j]>='a'&&s[j]<='z') s[j]-=32;  
            if(s[i]!=s[j]) return false;  
            ++i;--j;  
        }  
        return true;  
    }  
};
