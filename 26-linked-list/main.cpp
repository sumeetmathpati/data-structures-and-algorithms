#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            next = NULL;
        }
};

void insertAtEnd(Node *head, int data) {
    if (head != NULL) {

        while (head->next != NULL) {
            head = head->next;
        }
        Node *newNode = new Node(data);
        head->next = newNode;
    }
}

void insertAtStart(Node *head, int data) {
    if (head != NULL) {
        int tmp = head->data;
        head->data = data;
        Node *newNode = new Node(tmp);
        newNode->next = head->next;
        head->next = newNode;
    }
}

void printLinkedList(Node head) {
    Node *tmpHead = &head;
    while (tmpHead != NULL) {
        cout << tmpHead->data << " ";
        tmpHead = tmpHead->next;
    }
}

// Start from 0.
void printPosition(Node head, int pos) {
    int count = -1;
    Node *tmpHead = &head;

    while (tmpHead != NULL) {
        count++;
        if (count == pos) {
            cout << tmpHead->data;
            return;
        }
        tmpHead = tmpHead->next;
    }
}

// TODO
void deletePosition(Node *head, int pos) {
    
}

int main() {

    Node n1(1);
    insertAtEnd(&n1, 2);
    insertAtEnd(&n1, 3);
    insertAtEnd(&n1, 4);
    insertAtStart(&n1, 0);
    printLinkedList(n1);
    deletePosition(&n1, 0);
    printPosition(n1, 0);

    return 0;
}
