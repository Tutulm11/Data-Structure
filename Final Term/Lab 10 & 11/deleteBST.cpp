#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};


Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}



Node* findMinNode(Node* root) {
    Node* current = root;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}


Node* deleteInBST(Node* root, int data) {
    if (data < root->data) {
        root->left = deleteInBST(root->left, data);
    }
    else if (data > root->data) {
        root->right = deleteInBST(root->right, data);
    }
    else {

        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node* temp = findMinNode(root->right);
            root->data = temp->data;
            root->right = deleteInBST(root->right, temp->data);
        }
    }
    return root;
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "In-order Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Deleting 20 from BST..." << endl;
    root = deleteInBST(root, 20);
    cout << "In-order Traversal after deletion: ";
    inOrder(root);
    cout << endl;

    cout << "Deleting 30 from BST..." << endl;
    root = deleteInBST(root, 30);
    cout << "In-order Traversal after deletion: ";
    inOrder(root);
    cout << endl;

}
