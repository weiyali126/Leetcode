Write a function that takes a string as input and reverse only the vowels of a string.
Example 1:
Given s = "hello", return "holle".
Example 2:
Given s = "leetcode", return "leotcede".
Note:
The vowels does not include the letter "y".


题意：给定一个字符串，让你逆置其中元音的位置，其他不变。

思路：two pointers。
参考代码：
[cpp] view plain copy


 
class Solution {  
public:  
    string reverseVowels(string s) {  
        int n=s.size(),i=0,j=n-1;  
        string st="aeiouAEIOU";  
        while(i<j){  
            while(i<j&&st.find(s[i])==-1) ++i;  
            while(i<j&&st.find(s[j])==-1) --j;  
            swap(s[i],s[j]);  
            ++i;--j;  
        }  
        return s;  
    }  
};  
