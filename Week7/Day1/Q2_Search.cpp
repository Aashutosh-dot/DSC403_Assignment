#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int search(Node* head, int x) {
    int pos = 1;
    while (head != nullptr) {
        if (head->data == x)
            return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};
    int x = 20;

    int result = search(head, x);
    if (result != -1)
        cout << "Found at position " << result;
    else
        cout << "Not found";
    return 0;
}