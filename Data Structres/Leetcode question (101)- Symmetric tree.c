// Question: Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
// Test case 1: Input: root = [1,2,2,3,4,4,3]
// Output: true
// Test case 2: Input: root = [1,2,2,null,3,null,3]
// Output: False
// C code

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkSymmetric(struct TreeNode * left, struct TreeNode * right)
{
    if(!left && !right)
    {
        return true;
    }
    else if (!(left && right)) {
        return false;
    }

    if (left -> val == right -> val) // if the value of right and left is same 
    {
        return checkSymmetric(left -> left, right -> right ) && checkSymmetric(left -> right, right -> left ); // Checking symmetricity
    }
    else
    {
        return false;
    }
}
bool isSymmetric(struct TreeNode* root){
    if (!root == 1) {
        return true;
    }
    return checkSymmetric(root -> left, root -> right);

}
