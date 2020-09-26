/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    int pVal = p->val;
    int qVal = q->val;
    struct TreeNode* node = root;
    
    while(node != NULL){
        if(node->val > qVal && node->val > pVal){
            node = node->left;
        }else if(node->val < qVal && node->val < pVal){
            node = node->right;
        }else{
            return node;
        }
    }
    return NULL;
}