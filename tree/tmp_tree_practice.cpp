#include<iostream>
using namespace std;
/*first I'll gonna create a node class for every node in tree in it I'm gonna have two child nodes and one integer value, also I'm going to need a constructor to easily initialize new nodes.
 */
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    // constructor should be public
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }

    void preorderTraversal(Node *root)
    {
        if (root == NULL)
            return;
        cout << root->val << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
};

int main()
{
    cout << "hello world1" << endl;
    Node *root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);

    root->preorderTraversal(root);
    return 0;
}