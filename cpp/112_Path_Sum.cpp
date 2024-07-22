  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
private:

    bool checkNode(const TreeNode* node, int targetSum, int currSum) {
        if (node == nullptr) {
            return false;
        }

        currSum += node->val;

        if (node->left == nullptr && node->right == nullptr) {
            return currSum==targetSum;
        } else {
            return (checkNode(node->left, targetSum, currSum) || checkNode(node->right, targetSum, currSum));
        }
  }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return checkNode(root, targetSum, 0);
    }
};


  // with every addition check target sum, if == check nullptr
  // if > ret false
  // if < continue
  // recursive for left and right child
