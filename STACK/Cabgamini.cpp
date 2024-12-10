#include <iostream>
#include <vector>
using namespace std;

const int MAX_SIZE = 10; // Maximum size of the stack

// Function to push an element onto the stack
void push(vector<int>& stack) {
    if (stack.size() < MAX_SIZE) {
        int element;
        cout << "Enter the element to push: ";
        cin >> element;
        stack.push_back(element); // Push element onto the stack
    } else {
        cout << "Stack is full!" << endl;
    }
}

// Function to pop an element from the stack
void pop(vector<int>& stack) {
    if (stack.empty()) {
        cout << "Stack is empty!" << endl;
    } else {
        stack.pop_back(); // Pop element from the stack
    }
}

// Function to check if the stack is full
void isFull(const vector<int>& stack) {
    if (stack.size() == MAX_SIZE) {
        cout << "Stack is full!" << endl;
    } else {
        cout << "Stack is not full!" << endl;
    }
}

// Function to check if the stack is empty
void isEmpty(const vector<int>& stack) {
    if (stack.empty()) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty!" << endl;
    }
}

int main() {
    vector<int> stack; // Vector to store stack elements
    int choice;

    while (true) {
        cout << "\nChoose an operation:" << endl;
        cout << "1: Push an integer onto the stack" << endl;
        cout << "2: Pop an integer from the stack" << endl;
        cout << "3: Check if the stack is full" << endl;
        cout << "4: Check if the stack is empty" << endl;
        cout << "5: Exit the program" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                push(stack); // Call push function
                break;
            case 2:
                pop(stack); // Call pop function
                break;
            case 3:
                isFull(stack); // Call isFull function
                break;
            case 4:
                isEmpty(stack); // Call isEmpty function
                break;
            case 5:
                return 0; // Exit the program
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}