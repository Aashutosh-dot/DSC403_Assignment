#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteValue(Node*& head, int x) {
    if (!head) return;

    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    while (curr->next && curr->next->data != x)
        curr = curr->next;

    if (curr->next) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
}

void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    deleteValue(head, 2);
    print(head);
    return 0;
}