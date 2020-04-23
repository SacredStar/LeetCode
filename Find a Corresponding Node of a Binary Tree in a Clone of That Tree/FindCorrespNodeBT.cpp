/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void findNode(TreeNode* root1,TreeNode* tar,TreeNode* &ans)
{
    if(root1==NULL)
        return;
    if(root1->val == tar->val)
        ans=root1;
    findNode(root1->left,tar,ans);
    findNode(root1->right,tar,ans);
}
TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)    {
    TreeNode* ans = NULL;
    findNode(cloned,target,ans);
    return ans;
}
};