#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printReverse(Node* head) {
    if (!head) return;
    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    printReverse(head);
    return 0;
}