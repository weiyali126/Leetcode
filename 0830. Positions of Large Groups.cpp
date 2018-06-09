In a string S of lowercase letters, these letters form consecutive groups of the same character.
For example, a string like S = "abbxxxxzyy" has the groups "a", "bb", "xxxx", "z" and "yy".
Call a group large if it has 3 or more characters.  We would like the starting and ending positions of every large group.
The final answer should be in lexicographic order.
 
Example 1:
Input: "abbxxxxzzy"
Output: [[3,6]]
Explanation: 
"xxxx" is the single 
large group with starting  3 and ending positions 6.
Example 2:
Input: "abc"
Output: []
Explanation: We have "a","b" and "c" but no large group.
Example 3:
Input: "abcdddeeeeaabbbcd"
Output: [[3,5],[6,9],[12,14]]
 
Note:  1 <= S.length <= 1000


题意：给定一个字符串，规定连续相同的字符为一个组，如果连续相同的字符数量不小于3，称为大组，让你找出每一个大组的首末下标，输出。

思路：

1.直接遍历，寻找符合条件的组加入结果中即可。
参考代码：
 
class Solution {  
public:  
    vector<vector<int>> largeGroupPositions(string S) {  
        int cnt=1,st=0,ed=0,k=0,n=S.size();  
        vector<vector<int>> ans;  
        vector<int> v(2);  
        for(int i=0;i<n;++i){  
            if(S[i]==S[i+1]){  
                cnt++;  
            }else{  
                ed=i;  
                if(cnt>=3){  
                    v[0]=st;  
                    v[1]=ed;  
                    ans.push_back(v);  
                }  
                cnt=1;  
                st=i+1;  
            }  
        }  
        return ans;  
    }  
};  
