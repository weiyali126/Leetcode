A sentence S is given, composed of words separated by spaces. Each word consists of lowercase and uppercase letters only.
We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.)
The rules of Goat Latin are as follows:
If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
For example, the word 'apple' becomes 'applema'.
 
If a word begins with a consonant (i.e. not a vowel), remove the first letter and append it to the end, then add "ma".
For example, the word "goat" becomes "oatgma".
 
Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
For example, the first word gets "a" added to the end, the second word gets "aa" added to the end and so on.
Return the final sentence representing the conversion from S to Goat Latin. 
 
Example 1:
Input: "I speak Goat Latin"
Output: "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
Example 2:
Input: "The quick brown fox jumped over the lazy dog"
Output: "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
 
Notes:
S contains only uppercase, lowercase and spaces. Exactly one space between each word.
1 <= S.length <= 150.


题意：给定一个句子，让你按照指定规则修改为“山羊拉丁文”。规则如下：

    ①如果单词首字母是元音，则在其后面加上字符串“ma”。

    ②如果单词首字母是辅音，则将第一个字母移至单词末尾，再加上“ma”。

    ③最后统一在每个单词后面按照单词的序号加上相应个数的字母“a”，序号从一开始。

思路：

1.模拟题直接按照要求进行即可。
参考代码：

class Solution {

public:

    string toGoatLatin(string S) {

        stringstream ss(S);

        string str="",vowel="aeiouAEIOU";

        int cnt=1;

        S="";

        while(ss>>str){

            if(vowel.find(str[0])==-1){

                str+=str[0];

                str.erase(str.begin());

            }

            str+="ma";

            for(int i=0;i<cnt;++i) str+='a';

           S+=(S.size()>0?" "+str:str);

            cnt++;

        }

        return S;

    }

};
