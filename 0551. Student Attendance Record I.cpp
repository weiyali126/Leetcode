You are given a string representing an attendance record for a student. The record only contains the following three characters:

'A' : Absent. 
'L' : Late.
'P' : Present. 

A student could be rewarded if his attendance record doesn't contain more than one 'A' (absent) or more than two continuous 'L' (late). 
You need to return whether the student could be rewarded according to his attendance record.
Example 1:
Input: "PPALLP"
Output: True

Example 2:
Input: "PPALLL"
Output: False



题意：给定一串字符串代表某学生的出勤序列，字符串中只包含三种字母，其中
'A' : Absent. 表示缺席
'L' : Late.表示迟到
'P' : Present. 表示出席

如果该学生的出勤序列中缺席次数不多于一次并且连续迟到次数不多于两次则该学生可被表扬，现给定一个出勤序列，问你该学生是否会被表扬。

思路：

1.直接使用两个计数器分别统计缺席次数和连续迟到次数，注意迟到次数的统计必须是连续的。
参考代码：

class Solution {

public:

    bool checkRecord(string s) {

        int recA=0,recL=0;

        for(int i=0;i<s.size()&&recA<2&&recL<3;++i){

            if(s[i]=='A') recA++;

            if(s[i]=='L') recL++;

            else recL=0;

        }

        if(recA>1||recL>2) return false;

        else return true;

    }

};
