class Solution {
private:
    vector<int> res;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == nullptr)
            return this->res;
        this->res.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return this->res;
    }
};