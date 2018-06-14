Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.
Please note that the string does not contain any non-printable characters.
Example:
Input: "Hello, my name is John"
Output: 5



题意：给定一个字符串，让你输出其中有几个连续片段，连续片段定义为中间没有空格的字符串。

思路：

1.先预处理把两端的多余空格清理掉。

2.设置计数器cnt（初值为1），每次碰到当前字符非空格并且下一个字符是空格就加一，最后如果字符串长度为0，输出0，否则输出cnt。
参考代码：

 
class Solution {  
public:  
    int countSegments(string s) {  
        int n=s.size(),k=0,cnt=1;  
        while(k<n&&s[k]==' ') ++k;  
        while(n>0&&s[n-1]==' ') --n;  
        for(;k<n;++k){  
            if(k<n-1&&s[k]!=' '&&s[k+1]==' ')  
                cnt++;  
        }  
        return n==0?0:cnt;  
    }  
};  
