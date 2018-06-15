Given a word, you need to judge whether the usage of capitals in it is right or not.
We define the usage of capitals in a word to be right when one of the following cases holds:
All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital if it has more than one letter, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.

Example 1:
Input: "USA"
Output: True

Example 2:
Input: "FlaG"
Output: False

Note:The input will be a non-empty word consisting of uppercase and lowercase latin letters.


题意：给定一个单词，让你判断其格式是否正确。正确的格式是如下三种。①全部是大写字母②全部是小写字母③只有首字母大写，其余为小写。

思路：

1.设置两个计数器，一个记录大写字母个数，一个记录小写字母个数，最后看计数器的值是否为上面三者之一。
参考代码：
 
class Solution {  
public:  
    bool detectCapitalUse(string word) {  
        int n=word.size(),low=0,upper=0;  
        for(int i=0;i<n;++i){  
            if(word[i]>='a'&&word[i]<='z') low++;  
            else upper++;  
        }  
        if(low==n||upper==n||(word[0]>='A'&&word[0]<='Z'&&low==n-1))  
            return true;  
        return false;  
    }  
};  
