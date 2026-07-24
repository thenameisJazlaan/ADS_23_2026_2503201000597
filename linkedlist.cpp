#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node(int value)
    {
        data = value;
        link = NULL;
    }
};

Node *top = NULL;


bool isempty()
{
    return (top == NULL);
}


void push(int value)
{
    Node *ptr = new Node(value);
    ptr->link = top;
    top = ptr;

    cout << value << " pushed into the stack.\n";
}


void pop()
{
    if (isempty())
    {
        cout << "Stack Underflow!\n";
        return;
    }

    Node *temp = top;
    cout << top->data << " popped from the stack.\n";
    top = top->link;
    delete temp;
}


void peek()
{
    if (isempty())
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        cout << "Top element is: " << top->data << endl;
    }
}


void display()
{
    if (isempty())
    {
        cout << "Stack is empty.\n";
        return;
    }

    Node *temp = top;
    cout << "Stack elements are: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}