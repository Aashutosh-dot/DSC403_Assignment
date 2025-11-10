#include <iostream>
using namespace std;

int main() {

    // 🔹 1. If Statement
    // Question: Write a program to check if a number is positive.
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
        cout << "Positive number";
    cout << endl;


    // 🔹 2. If-Else Statement
    // Question: Write a program to find the greater of two numbers.
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " is greater";
    else
        cout << b << " is greater";
    cout << endl;


    // 🔹 3. If-Else Ladder Statement
    // Question: Write a program to assign grades based on marks (A, B, C, F).
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 80)
        cout << "A";
    else if (marks >= 60)
        cout << "B";
    else if (marks >= 40)
        cout << "C";
    else
        cout << "F";
    cout << endl;


    // 🔹 4. Nested If Statement
    // Question: Write a program to check if a number is positive and even, positive and odd, negative, or zero.
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        if (number % 2 == 0)
            cout << "Positive and Even";
        else
            cout << "Positive and Odd";
    } else if (number < 0)
        cout << "Negative";
    else
        cout << "Zero";
    cout << endl;


    // 🔹 5. Ternary Operator
    // Question: Use a ternary operator to find the smaller of two numbers.
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int small = (x < y) ? x : y;
    cout << "Smaller number: " << small;
    cout << endl;


    // 🔹 6. Switch Statement
    // Question: Write a program that prints the day of the week based on a number (1–7).
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch (day) {
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
        case 7: cout << "Saturday"; break;
        default: cout << "Invalid day number!";
    }
    cout << endl;

    return 0;
}