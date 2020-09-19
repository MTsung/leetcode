/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int x,int y) {
    return (x > y?x:y);
}

int getHight(struct TreeNode* node){
    if(!node){
        return 0;
    }
    return max(getHight(node->left),getHight(node->right)) + 1;
}

bool isBalanced(struct TreeNode* root){
    if(!root){return true;}
    int hightR,hightL;
    hightR = getHight(root->right);
    hightL = getHight(root->left);
    if(abs(hightR - hightL) > 1){
        return false;
    }
    return isBalanced(root->right) && isBalanced(root->left);
}