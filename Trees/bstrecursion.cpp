#include <iostream>
using namespace std;

class bst {
public:
    int data;
    bst* left;
    bst* right;

    
    bst(int val) {
        data = val;
        left = right = NULL;
    }
};
bst* insert(bst* root, int val) {
    if (root == NULL)
        return new bst(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}

void inorder(bst* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    bst* root = NULL;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 7);

    cout << "Insertion successful!" << endl;
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}