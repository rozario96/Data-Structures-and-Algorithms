#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
    Stack s1;

    s1.push(50);
    s1.push(100);
    s1.push(23);
    s1.push(-12);

    // s1.display();

    // s1.pop();

    // s1.display();

    // s1.peek(2);

    s1.change(1, 99);
    s1.display();

    return 0;
}