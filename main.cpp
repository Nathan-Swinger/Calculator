#include <iostream>

using namespace std;

int main()
{
    int a, b, answer;
    string operation, start;
    start = "y";
    while(start != "n")
    {
    cout << "\nWould you like to do a/more problem(s)? (y/n)";
    cin >> start;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the operation: ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> b;
    if(operation == "+")
    {
        answer = a + b;
        cout << "Result: " << answer;
    }
    if(operation == "-")
    {
        answer = a - b;
        cout << "Result: " << answer;
    }
    if(operation == "*")
    {
        answer = a * b;
        cout << "Result: " << answer;
    }
    if(operation == "/")
    {
        answer = a / b;
        cout << "Result: " << answer;
    }

    }

    return 0;
}
