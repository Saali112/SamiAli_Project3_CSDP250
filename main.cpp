// Author: Sami Ali
// main.cpp
#include "binarySTree.h"
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Generate 35 random natural numbers less than 100
    vector<int> numbers;
    for (int i = 0; i < 35; ++i) {
        numbers.push_back(rand() % 100);
    }

    // Print the original numbers
    cout << "Original numbers:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Create the binary search tree
    BinarySearchTree bst;

    // Insert numbers into the binary search tree
    for (int num : numbers) {
        bst.insert(num);
    }

    // Perform and print traversals
    cout << "Pre-order Traversal:" << endl;
    bst.preOrderTraversal();

    cout << "In-order Traversal:" << endl;
    bst.inOrderTraversal();

    cout << "Post-order Traversal:" << endl;
    bst.postOrderTraversal();

    return 0;
}
