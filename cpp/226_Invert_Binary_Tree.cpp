  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

          if (!root) return nullptr;
 
          if (root->left) {
                invertTree(root->left);
          }

          if (root->right) {
                invertTree(root->right);
          }

        
          TreeNode* temp = root->left;
          root->left = root->right;
          root->right = temp;

          return root;
    }
};

  /*
  *
  *   if (!root) return nullptr;
  *
  *   TreeNote* temp = root->left;
  *   root->left = invertTree(root->right);
  *   root->right = invertTree(temp);
  * 
  *   return root;
  */