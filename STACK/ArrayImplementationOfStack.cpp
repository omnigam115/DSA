#include <iostream>
using namespace std;

class Stack {
public:
    int arr[100]; // Array to store stack elements
    int idx = -1; // Index to keep track of the top element

    void push(int val) {
        if (idx == 99) { // Check for stack overflow
            cout << "Stack is full!" << endl;
            return;
        }
        arr[++idx] = val; // Increment idx and store the value
    }

    void pop() {
        if (idx == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        idx--; // Decrement idx to remove the top element
    }

    int top() {
        if (idx == -1) {
            cout << "Stack is empty!" << endl;
            return -1; // Return -1 if the stack is empty
        }
        return arr[idx]; // Return the top element
    }

    int getSize() {
        return idx + 1;
    }

    void display() { // New function to display the stack elements
        if (idx == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= idx; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    int choice;
    int val;

    while (true) {
        cout << "\nStack Operations Menu" << endl;
        cout << "1. Push element" << endl;
        cout << "2. Pop element" << endl;
        cout << "3. Check top element" << endl;
        cout << "4. Check size" << endl;
        cout << "5. Display stack" << endl; // New option for displaying stack
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> val;
                st.push(val);
                break;
            case 2:
                st.pop();
                break;
            case 3: {
                int topVal = st.top();
                if (topVal != -1) { // Check if the stack is not empty
                    cout << "Top element: " << topVal << endl;
                }
                break;
            }
            case 4:
                cout << "Stack size: " << st.getSize() << endl;
                break;
            case 5:
                st.display(); // Call the display function
                break;
            case 6:
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}