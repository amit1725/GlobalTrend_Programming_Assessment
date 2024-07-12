#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxPath(TreeNode* root, int& maxi) {
    if (root == nullptr) {
        return 0;
    }
    int leftSum = max(0, maxPath(root->left, maxi));
    int rightSum = max(0, maxPath(root->right, maxi));
    maxi = max(maxi, leftSum + rightSum + root->val);
    return root->val + max(leftSum, rightSum);
}

int maxPathSum(TreeNode* root) {
    int maxi = INT_MIN;
    maxPath(root, maxi);
    return maxi;
}

int main() {
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << "Maximum path sum: " << maxPathSum(root) << endl;
    return 0;
}
