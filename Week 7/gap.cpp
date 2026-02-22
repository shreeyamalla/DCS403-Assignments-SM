// 6 no.
// if (root != nullptr && 
//     root->left != nullptr && 
//     root->left->left != nullptr) {
//     cout << root->left->left->data << endl;
// } else {
//     cout << "Element does not exist" << endl;
// }

// 7 no.
// TreeNode* search(TreeNode* root, int element) {
//     if (root == nullptr || root->data == element) {
//         return root;
//     }
//     if (element < root->data) {
//         return search(root->left, element);
//     }
//     return search(root->right, element);
// }

// 11 no.
// class BST {
// private:
//     TreeNode* root;
    
//     TreeNode* copyTree(TreeNode* node) {
//         if (node == nullptr) {
//             return nullptr;
//         }
//         TreeNode* newNode = new TreeNode(node->data);
//         newNode->left = copyTree(node->left);
//         newNode->right = copyTree(node->right);
//         return newNode;
//     }
    
//     void deleteTree(TreeNode* node) {
//         if (node == nullptr) return;
//         deleteTree(node->left);
//         deleteTree(node->right);
//         delete node;
//     }

// public:
//     BST(const BST& other) {
//         root = copyTree(other.root);
//     }
    
//     BST& operator=(const BST& other) {
//         if (this != &other) {  
//             deleteTree(root);  
//             root = copyTree(other.root); 
//         }
//         return *this;
//     }
//     ~BST() {
//         deleteTree(root);
//     }
// };