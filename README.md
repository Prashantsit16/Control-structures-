# Control-structures-
Aim:
To explore and demonstrate the use of control structures in C++, including conditional statements and loops. This involves implementing if, else, switch, for, while, and do-while constructs to control the flow of the program based on various conditions.

Theory:
Control structures are fundamental in programming, allowing for decision-making and iteration:

if and else: Used for branching logic based on conditions.
switch: Provides a way to select one of many code blocks to execute, based on the value of an expression.
for loop: Used for iteration with a known number of iterations.
while loop: Repeats a block of code as long as a condition is true.
do-while loop: Similar to while, but guarantees that the block of code executes at least once before checking the condition.
These structures help in directing program execution flow based on logical conditions and repetitive tasks.

Procedure:
Include Required Headers:

#include <iostream>
using namespace std;
Define Main Function:


int main() {
    int num;
    
    // Conditional statements
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // Switch statement
    switch (num % 2) {
        case 0:
            cout << "The number is even." << endl;
            break;
        case 1:
            cout << "The number is odd." << endl;
            break;
    }

    // For loop
    cout << "Counting from 1 to 5 using a for loop:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // While loop
    int count = 1;
    cout << "Counting from 1 to 5 using a while loop:" << endl;
    while (count <= 5) {
        cout << count << " ";
        ++count;
    }
    cout << endl;

    // Do-while loop
    count = 1;
    cout << "Counting from 1 to 5 using a do-while loop:" << endl;
    do {
        cout << count << " ";
        ++count;
    } while (count <= 5);
    cout << endl;

    return 0;
}
OUTPUT:
![Screenshot 2024-09-05 152730](https://github.com/user-attachments/assets/36f62181-d509-4d01-8c13-fdfefd140731)
![Screenshot 2024-09-05 152742](https://github.com/user-attachments/assets/60e4edd1-8adb-44e4-9089-ab9bf7c09164)
![Screenshot 2024-09-05 152751](https://github.com/user-attachments/assets/45ec8104-9592-4ca9-b6b6-4012b001e88a)

Conclusion:
Control structures in C++ are essential for managing program flow and implementing decision-making and repetitive tasks. By using if, switch, for, while, and do-while constructs, one can create versatile and responsive programs. The examples demonstrate how these structures work in practice, reinforcing their importance in effective programming. Understanding and utilizing these control structures is crucial for developing robust and efficient code.
