#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int count(Node* head) {
    int c = 0;
    while (head) {
        c++;
        head = head->next;
    }
    return c;
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    cout << count(head);
    return 0;
}