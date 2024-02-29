#include <iostream>
// #include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        left = right = NULL;
    }
};
Node *buildTree(Node *root)
{
    // cout << "enter data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
        return NULL;

    // cout << "enter data for inserting left:" << endl;
    root->left = buildTree(root->left);
    // cout << "enter data for inserting right" << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* tmp = q.front();
        cout << tmp -> value << " ";
        q.pop();
        // q.push(NULL);
        if(tmp->left){
            q.push(tmp->left);
        }
        if(tmp->right)
            q.push(tmp->right);
    }
}
void preorderTraversal(Node* root){
    if(root == NULL)
        return;
    cout << root->value << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(Node* root){
    if(root == NULL)
        return;
    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->value << " ";
}
void inorderTraversal(Node* root){
    if(root == NULL)
        return;
    
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
    
}
int main()
{
    // Node *root = NULL;
    // root = buildTree(root);
    Node *root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    cout << "level order traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;
    preorderTraversal(root);
    cout << endl;
    postorderTraversal(root);
    cout << endl;
    inorderTraversal(root);
    cout << endl;
    // cout<< (*root).value << endl;
    // cout << root->left->value << endl;
    return 0;
}