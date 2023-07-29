#include <iostream>

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool areIdentical(TreeNode* root1, TreeNode* root2) {
    // If both trees are empty, they are identical
    if (root1 == nullptr && root2 == nullptr) {
        return true;
    }

    // If one of the trees is empty, they are not identical
    if (root1 == nullptr || root2 == nullptr) {
        return false;
    }

    // Check if the current nodes have the same value and recursively check left and right subtrees
    return (root1->val == root2->val) &&
           areIdentical(root1->left, root2->left) &&
           areIdentical(root1->right, root2->right);
}

int main() {
    // Create the first binary tree
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(4);
    root1->left->right = new TreeNode(5);

    // Create the second binary tree
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);
    root2->left->left = new TreeNode(4);
    root2->left->right = new TreeNode(5);

    // Check if the two trees are identical
    if (areIdentical(root1, root2)) {
        std::cout << "The two trees are identical.\n";
    } else {
        std::cout << "The two trees are not identical.\n";
    }

    // TODO: Don't forget to free memory by deleting the tree nodes
    // Implement the necessary cleanup before the program ends.

    return 0;
}
