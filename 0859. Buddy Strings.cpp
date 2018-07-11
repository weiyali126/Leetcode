Given two strings A and B of lowercase letters, return true if and only if we can swap two letters in A so that the result equals B.
 
Example 1:
Input: A = "ab", B = "ba"
Output: true
Example 2:
Input: A = "ab", B = "ab"
Output: false
Example 3:
Input: A = "aa", B = "aa"
Output: true
Example 4:
Input: A = "aaaaaaabc", B = "aaaaaaacb"
Output: true
Example 5:
Input: A = "", B = "aa"
Output: false
 
Note:
0 <= A.length <= 20000
0 <= B.length <= 20000
A and B consist only of lowercase letters.


题意：给定俩字符串A和B，如果在当且仅当交换A中两个字符的情况下，能使AyuB相等，返回true，否则返回false。


思路：

1.返回正确的情况只有两种，①A与B完全相等，并且A中有某个字符出现了至少两次，此时交换这个字母即可符合要求。②A与B恰有两个字母不同，并且交换A中的这两个字母后，A与B完全相同。

2.如果两字符串长度不一致，则一定不满足条件。
参考代码：

class Solution {

public:

    bool buddyStrings(string A, string B) {

        int cnt=0,id1,id2,hta[26]={0};

        if(A.size()!=B.size()) return false;

        bool flag=false;

        for(int i=0;i<A.size();++i){

            if(A[i]!=B[i]) {

               cnt++;

                cnt==1?id1=i:id2=i;

            }

           if(++hta[A[i]-'a']>1) flag=true;

        }

        if((A==B&&flag)||(cnt==2&&A[id1]==B[id2]&&A[id2]==B[id1]))

            return true;

        return false;

    }

};
