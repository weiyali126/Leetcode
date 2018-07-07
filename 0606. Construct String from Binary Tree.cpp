You need to construct a string consists of parenthesis and integers from a binary tree with the preorder traversing way.
The null node needs to be represented by empty parenthesis pair "()". And you need to omit all the empty parenthesis pairs that don't affect the one-to-one mapping relationship between the string and the original binary tree.
Example 1:
Input: Binary tree: [1,2,3,4]
       1
     /   \
    2     3
   /    
  4     

Output: "1(2(4))(3)"

Explanation: Originallay it needs to be "1(2(4)())(3()())", 
but you need to omit all the unnecessary empty parenthesis pairs. 
And it will be "1(2(4))(3)".

Example 2:
Input: Binary tree: [1,2,3,null,4]
       1
     /   \
    2     3
     \  
      4 

Output: "1(2()(4))(3)"

Explanation: Almost the same as the first example, 
except we can't omit the first parenthesis pair to break the one-to-one mapping relationship between the input and the output.



题意：给定一个二叉树，让你按照先序序列，按照指定格式输出对应的字符串。

思路：

1.使用先序递归遍历。

2.注意如果某节点只有右孩子没有左孩子，则左孩子括号不能省略，否则会导致歧义。
参考代码：

/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     TreeNode *left;

 *     TreeNode *right;

 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}

 * };

 */

 string ans="";

class Solution {

public:

    

    string tree2str(TreeNode* t) {

        if(t==NULL) return "";

        if(t->left==NULL&&t->right==NULL) return to_string(t->val);

        string left=t->left==NULL?"()":"("+tree2str(t->left)+")";

        string right=t->right==NULL?"":"("+tree2str(t->right)+")";

        return to_string(t->val)+left+right;

    }

};
