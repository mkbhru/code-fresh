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
        q.push(NULL);
        if(tmp->left){
            q.push(tmp->left);
        }
        if(tmp->right)
            q.push(tmp->right);
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << "level order traversal: ";
    levelOrderTraversal(root);
    // cout<< (*root).value << endl;
    // cout << root->left->value << endl;
    return 0;
}