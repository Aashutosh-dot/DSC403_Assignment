#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = nullptr;
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}