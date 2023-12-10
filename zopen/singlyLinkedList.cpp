#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is freed for the node with data: " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *tmp = new Node(d);
    tmp->next = head;
    head = tmp;
}

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        // head = head->next;
        head = (*head).next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(Node *&tail, int d)
{
    Node *tmp = new Node(d);
    tail->next = tmp;
    tail = tmp;
}

void insertAtIndex(Node *&tail, Node *&head, int d, int i)
{
    // inserting at head
    if (i == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *tmp = head;
    int cnt = 1;
    while (cnt < i - 1)
    {
        tmp = tmp->next;
        cnt++;
    }
    // inserting at tail, to point tail at last element
    if (tmp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *newNode = new Node(d);
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void deleteNodeAtIndex(Node *&head, int i)
{
    if(i == 1){
        Node *tmp = head;
        head = head->next;
        tmp->next = NULL;
        delete tmp;
    }
    else{
        int cnt;
        Node *tmp = head;
        while (cnt < i - 1) // traverse to pre
        {
            tmp = tmp->next;
            cnt++;
        }
        Node *pre = tmp;
        Node *nxt = tmp->next->next;
        Node *cur = tmp->next;

        pre->next = nxt;
    }
    
}

int main()
{

    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    // printLL(head);
    // insertAtHead(head, 10);
    // insertAtHead(head, 20);
    printLL(head);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    printLL(head);
    insertAtIndex(tail, head, 44, 3);
    printLL(head);
    insertAtIndex(tail, head, 88, 6);
    printLL(head);
    cout << "head " << head->data << " tail " << tail->data << endl;
    deleteNodeAtIndex(head, 1);
    printLL(head);

    return 0;
}