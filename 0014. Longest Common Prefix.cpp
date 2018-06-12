Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:
Input: ["flower","flow","flight"]
Output: "fl"
Example 2:
Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:
All given inputs are in lowercase letters a-z.


题意：给定一组单词，让你找出这些单词的公共前缀。

思路：
1.逐个对照，，，判断。
参考代码：
[cpp] view plain copy


 
class Solution {  
public:  
    string longestCommonPrefix(vector<string>& strs) {  
        int n=strs.size();  
        string ans="";  
        bool flag=true;  
        if(strs.size()==1) return strs[0];  
        else if(strs.size()==0) return ans;  
        for(int i=0;flag;++i){  
            for(int k=1;k<n&&flag;++k){  
                if(strs[k][i]!=strs[k-1][i]){  
                    flag=false;  
                }  
            }  
            if(flag) ans+=strs[0][i];  
        }  
        return ans;  
    }  
};  
