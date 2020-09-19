/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     public $val = null;
 *     public $left = null;
 *     public $right = null;
 *     function __construct($val = 0, $left = null, $right = null) {
 *         $this->val = $val;
 *         $this->left = $left;
 *         $this->right = $right;
 *     }
 * }
 */
class Solution {

    /**
     * @param TreeNode $t
     * @return String
     */
    function tree2str($t) {
        $str = "";
        $this->_t($t,$str);
        return $str;
    }
    
    function _t($t,&$str){
        if(!$t){
            return;
        }
        
        $str .= $t->val;
        
        if(!$t->left && !$t->right){
            return;
            
        }
        
        $str .= "(";
        $this->_t($t->left,$str);
        $str .= ")";
        if($t->right){
            $str .= "(";
            $this->_t($t->right,$str);
            $str .= ")";   
        }        
    }
}