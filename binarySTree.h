#ifndef BINARYSTREE_H
#define BINARYSTREE_H

#include <iostream>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* leftNext;
    TreeNode* rightNext;

    TreeNode(int val) : value(val), leftNext(nullptr), rightNext(nullptr) {}
};

class BinarySearchTree {
public:
    BinarySearchTree();
    ~BinarySearchTree();

    void insert(int value);
    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;

private:
    TreeNode* root;

    void insert(TreeNode*& node, int value);
    void preOrderTraversal(TreeNode* node) const;
    void inOrderTraversal(TreeNode* node) const;
    void postOrderTraversal(TreeNode* node) const;
    void clear(TreeNode* node);
};

#endif
