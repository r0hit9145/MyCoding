#include <iostream>
using namespace std;

class Node {
public:
    int data = 10;
    Node* next = NULL;

    void One_Head(Node* &Head, int d) {
        Node* temp = new Node(d);
        temp->next = Head;
        Head = temp;
    }

    void print(Node* &Head) {
        Node* temp = Head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Node* node1 = new Node();
    cout << "Before :" << endl;

    Node* Head = node1;
    node1->print(Head);
    node1->One_Head(Head, 12);
    node1->print(Head);
    return 0;
}
