#include <iostream>
using namespace std;

int main() {
    int q[] = {10, 20, 30};
    int front = 0, rear = 2;
    cout << "Deleted: " << q[front++] << endl;
    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
    return 0;
}