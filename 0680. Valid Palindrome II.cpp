Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.
Example 1:
Input: "aba"
Output: True

Example 2:
Input: "abca"
Output: True
Explanation: You could delete the character 'c'.

Note:
The string will only contain lowercase characters a-z.The maximum length of the string is 50000.



题意：给定一个字符串只包含小写字母，让你在最多删去一个字符的情况下，判断该字符串是否为回文串。



思路：

1.单独写一个判断函数，判断给定字符串是否回文，以简化代码。

2.注意使用string.erase（）函数精简操作。


3.首先判断给定字符串是否回文，如果是返回true，如果不是，使用双指针找到不同的那两个字符，然后分别删除并判断剩下的字符串是否回文，即可。

4.时间复杂度O（n），空间复杂度O（1）。

参考代码：

class Solution {

public:

    bool validPalindrome(string s) {

        int n=s.size(),i=0,j=n-1;

        if(judge(s)) return true;

        while(i<j&&s[i]==s[j]){

                ++i;--j;

        }

		string t=s;

		t.erase(t.begin()+i);

        if(judge(t)) return true;

		s.erase(s.begin()+j);

        if(judge(s)) return true;

        return false;

    }

    bool judge(string s){

        int i=0,j=s.size()-1;

        while(i<j){

            if(s[i]!=s[j])

                return false;

			++i;--j;

        }

        return true;

    }

};
