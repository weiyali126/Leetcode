Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.
Example:
Input: "Hello World"
Output: 5



题意：给定一个字符串，让你输出其最后一个单词的长度。

思路1：

1.从右往左遍历，找到第一个空格符，其后面就是最后一个单词。另外有可能最后一个单词后面还有空格符，所以需要预处理先把最后面的空格符全清理掉。
参考代码：

 
class Solution {  
public:  
    int lengthOfLastWord(string s) {  
        int n=s.size(),k;  
        while(n>0&&s[n-1]==' ') --n;  //预处理  
        if(n==0) return 0;  
        k=n-1;  
        while(k>=0&&s[k]!=' ') --k;  
        return n-1-k;  
    }  
};  
思路2：

1.使用stringstream导出最后一个单词输出长度。
参考代码：

 
class Solution {  
public:  
    int lengthOfLastWord(string s) {  
        stringstream stream(s);  
        string word="";  
        int length=0;  
        while(stream>>word){  
            length=word.size();  
        }  
        return length;  
    }  
};  
