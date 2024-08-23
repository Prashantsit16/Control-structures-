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

cpp
Copy code
#include <iostream>
using namespace std;
Define Main Function:

cpp
Copy code
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
Compile and Run:
Use a C++ compiler to compile and run the program. Enter different values to observe how the control structures handle the input and control the program flow.

Conclusion:
Control structures in C++ are essential for managing program flow and implementing decision-making and repetitive tasks. By using if, switch, for, while, and do-while constructs, one can create versatile and responsive programs. The examples demonstrate how these structures work in practice, reinforcing their importance in effective programming. Understanding and utilizing these control structures is crucial for developing robust and efficient code.
