#include "binarySTree.h"

// Constructor
BinarySearchTree::BinarySearchTree() : root(nullptr) {}

// Destructor
BinarySearchTree::~BinarySearchTree() {
    clear(root);
}

// Insert a value into the tree
void BinarySearchTree::insert(int value) {
    insert(root, value);
}

void BinarySearchTree::insert(TreeNode*& node, int value) {
    if (node == nullptr) {
        node = new TreeNode(value);
    }
    else if (value < node->value) {
        insert(node->leftNext, value);
    }
    else {
        insert(node->rightNext, value);
    }
}

// Pre-order traversal
void BinarySearchTree::preOrderTraversal() const {
    preOrderTraversal(root);
    cout << endl;
}

void BinarySearchTree::preOrderTraversal(TreeNode* node) const {
    if (node) {
        cout << node->value << " ";
        preOrderTraversal(node->leftNext);
        preOrderTraversal(node->rightNext);
    }
}

// In-order traversal
void BinarySearchTree::inOrderTraversal() const {
    inOrderTraversal(root);
    cout << endl;
}

void BinarySearchTree::inOrderTraversal(TreeNode* node) const {
    if (node) {
        inOrderTraversal(node->leftNext);
        cout << node->value << " ";
        inOrderTraversal(node->rightNext);
    }
}

// Post-order traversal
void BinarySearchTree::postOrderTraversal() const {
    postOrderTraversal(root);
    cout << endl;
}

void BinarySearchTree::postOrderTraversal(TreeNode* node) const {
    if (node) {
        postOrderTraversal(node->leftNext);
        postOrderTraversal(node->rightNext);
        cout << node->value << " ";
    }
}

// Clear the tree
void BinarySearchTree::clear(TreeNode* node) {
    if (node) {
        clear(node->leftNext);
        clear(node->rightNext);
        delete node;
    }
}
