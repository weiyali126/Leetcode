Given a paragraph and a list of banned words, return the most frequent word that is not in the list of banned words.  It is guaranteed there is at least one word that isn't banned, and that the answer is unique.
Words in the list of banned words are given in lowercase, and free of punctuation.  Words in the paragraph are not case sensitive.  The answer is in lowercase.
Example:
Input: 
paragraph = "Bob hit a ball, the hit BALL flew far after it was hit."
banned = ["hit"]
Output: "ball"
Explanation: 
"hit" occurs 3 times, but it is a banned word.
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. 
Note that words in the paragraph are not case sensitive,
that punctuation is ignored (even if adjacent to words, such as "ball,"), 
and that "hit" isn't the answer even though it occurs more because it is banned.
 
Note: 
1 <= paragraph.length <= 1000.
1 <= banned.length <= 100.
1 <= banned[i].length <= 10.
The answer is unique, and written in lowercase (even if its occurrences in paragraph may have uppercase symbols, and even if it is a proper noun.)
paragraph only consists of letters, spaces, or the punctuation symbols !?',;.
Different words in paragraph are always separated by a space.
There are no hyphens or hyphenated words.
Words only consist of letters, never apostrophes or other punctuation symbols.
 


题意：给定一段文章和一串被禁止的单词列表，让你找出这段文章中出现频率最高的这个单词，要求这个单词不能在被禁止的单词列表中。题目保证段落中至少一个符合要求的单词。

思路：

1.首先使用一个unordered_map存储所有被禁止的单词，以加快判定速度，然后再使用另一个unordered_map记录每个单词的出现次数，最后返回频率最高的单词即可。

2.注意把单词中的大写字母转成小写。可以使用pair存储最终结果。
参考代码：

class Solution {

public:

    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_map<string,int> ban,res;

        pair<string,int> ans("",0);

        for(int i=0;i<banned.size();++i){

            ban[banned[i]]=1;

        }

        for(int i=0;i<paragraph.size();++i){

            if((paragraph[i]>='a'&¶graph[i]<='z')||(paragraph[i]>='A'&¶graph[i]<='Z')){

                string temp="";

                while((paragraph[i]>='a'&¶graph[i]<='z')||(paragraph[i]>='A'&¶graph[i]<='Z')){

                    if((paragraph[i]>='A'&¶graph[i]<='Z'))

                        paragraph[i]=paragraph[i]+32;

                    temp+=paragraph[i];

                    ++i;

                }

                if(ban.find(temp)==ban.end()&&++res[temp]>ans.second){

                   ans=make_pair(temp,res[temp]);

                }

            }

        }

        return ans.first;

    }

};
