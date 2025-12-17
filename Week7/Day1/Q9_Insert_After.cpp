#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAfter(Node* head, int x, int y) {
    while (head) {
        if (head->data == x) {
            Node* newNode = new Node{y, head->next};
            head->next = newNode;
            return;
        }
        head = head->next;
    }
}

void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{4, nullptr}}};
    insertAfter(head, 2, 3);
    print(head);
    return 0;
}