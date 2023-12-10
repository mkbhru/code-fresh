#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data; // we use this to explicitly specify that we are using variable of class, when we have the same var as parameters.
        prev = NULL;
        next = NULL;
    }
};
// traversing dll
void printDLL(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << "->"; // use this statement above the next one as after that data of next node will be used
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}
// gives length of dll
int getSize(Node *&head)
{
    Node *tmp = head;
    int n = 0;
    while (tmp != NULL)
    {
        n++;
        tmp = tmp->next;
    }
    return n;
}

void insertAtHead(Node *&head, int d)
{
    Node *newNode = new Node(d);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node *&tail, int d)
{
    Node *newNode = new Node(d);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtIndex(Node *&tail, Node*&head, int i, int d){
    if(i == 1){
        insertAtHead(head, d);
        return;
    }
    
    int cnt = 1;
    Node *tmp = head;// pass by value, if it was *&tmp then pass by reference
    while(cnt < i -1){
        tmp = tmp ->next;
        cnt++;
    }

    Node *newNode = new Node(d);
    Node *prevNode = tmp;
    Node *nextNode = tmp->next;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    if(nextNode != NULL)
        nextNode->prev = newNode;
    newNode->next = nextNode;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    printDLL(head);
    cout << getSize(head) << endl;
    insertAtHead(head, -10);
    printDLL(head);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    printDLL(head);
    insertAtIndex(tail, head, 1, 45);
    printDLL(head);
    insertAtIndex(tail, head, 7, 95);
    printDLL(head);

    return 0;
}