#include <iostream>
#include <queue> // For level order traversal

using namespace std;

class Node {
    public:
        int data;
        Node *l;
        Node *r;
    
        Node(int data) {
            this->data = data;
            this->l = NULL;
            this->r = NULL;
        }
};

Node *buildTree() {
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }
    
    Node *n = new Node(d);
    n->l = buildTree();
    n->r = buildTree();

    return n;
}

Node *buildTreeFromLevelOrder() {
    int d;
    int t, t2;

    cin >> d;

    if (d == -1) {
        return NULL;
    }

    Node *head = new Node(d);
    Node *tmp = new Node(d);

    queue<Node *> q;
    q.push(head);

    while(!q.empty()) {
        tmp = q.front();
        q.pop();

        cin >> t >> t2;

        if (t != -1) {
            tmp->l = new Node(t);
            q.push(tmp->l);
        }

        if (t2 != -1) {
            tmp->r = new Node(t2);
            q.push(tmp->r);
        }
    }

    return head;
}

void preorderPrint(Node *head) {
    if (head == NULL) {
        return;
    }

    cout << head->data << " ";
    preorderPrint(head->l);
    preorderPrint(head->r);
}

void inorderPrint(Node *head) {
    if (head == NULL) {
        return;
    }

    inorderPrint(head->l);
    cout << head->data << " ";
    inorderPrint(head->r);
}

void postorderPrint(Node *head) {
    if (head == NULL) {
        return;
    }

    postorderPrint(head->l);
    postorderPrint(head->r);
    cout << head->data << " ";
}

void bfsPrint(Node *head) {
    queue<Node *> q;
    q.push(head);
    Node *tmp;

    while (!q.empty()) {
        tmp = q.front();
        cout << tmp->data << " ";
        if (tmp->l) {
            q.push(tmp->l);
        }
        if (tmp->r) {
            q.push(tmp->r);
        }
        q.pop();
        
    }
}

int main() {

    Node *head = buildTree();
    Node *head = buildTreeFromLevelOrder(); // Input data in level order form.

    cout << "Preorder:\n\t";
    preorderPrint(head);
    cout << endl;

    cout << "Inorder:\n\t";
    inorderPrint(head);
    cout << endl;

    cout << "Level order:\n\t";
    bfsPrint(head);
    cout << endl;

    return 0;
}