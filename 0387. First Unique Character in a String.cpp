Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
Examples:
s = "leetcode"
return 0.

s = "loveleetcode",
return 2.

Note: You may assume the string contain only lowercase letters.


题意：给定一串字符串，让你找出第一个只出现一次的字符，返回其下标，若没有则返回-1.

思路：

1.使用unorded_map记录每个字符出现次数，第二次遍历时找出第一个次数为1的字符返回下标。
参考代码：

class Solution {

public:

    int firstUniqChar(string s) {

        unordered_map<char,int> mp;

        int n=s.size();

        for(int i=0;i<n;++i){

            mp[s[i]]++;

        }

        for(int i=0;i<n;++i){

			if(mp[s[i]]==1) return i;

        }

        return -1;

    }

};
