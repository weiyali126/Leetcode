Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

Note:In the string, each word is separated by single space and there will not be any extra space in the string.


题意：给定一个字符串代表一句话，让你逆转其中的每一个单词，同时保持原来的单词顺序不变。

思路：

1.注意循环中要能处理最后一个单词。
参考代码：

class Solution {

public:

    string reverseWords(string s) {

        int st=0,ed=0,n=s.size();

        for(int i=0;i<=n;++i){

            if(i==n||s[i]==' '){

                reverse(s.begin()+st,s.begin()+i);

                st=i+1;

            }

        }

        return s;

    }

};
