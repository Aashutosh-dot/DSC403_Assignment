#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deletePos(Node*& head, int pos) {
    if (!head || pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr->next; i++)
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
    deletePos(head, 2);
    print(head);
    return 0;
}