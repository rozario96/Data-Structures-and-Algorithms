#include <iostream>
using namespace std;

class Stack
{
    private:
        int top;
        int a[5];
    
    public:
        Stack()
        {
            top = -1;
            for(int i = 0; i < 5; i++) 
            {
                a[i] = 0;
            }
        }

        bool isEmpty()
        {
            return (top == -1) ? true : false;
        }

        bool isFull()
        {
            return (top == 4) ? true : false;
        }

        void push(int value)
        {
            if(isFull())
            {
                cout << "Stack Overflow." << endl;
            }
            else
            {
                top++;
                a[top] = value;
            }
        }

        int pop()
        {
            if(isEmpty())
            {
                cout << "Stack Underflow." << endl;
                return 0;
            }
            else
            {
                int pop = a[top];
                a[top] = 0;
                top--;
                return pop;
            }
        }

        int count()
        {
            return (top + 1);
        }

        void peek(int position)
        {
            if(isEmpty())
            {
                cout << "Empty Stack." << endl;
            }
            else
            {
                cout << a[position];
            }
        } 

        void change(int position, int value)
        {
            if(isEmpty())
            {
                cout << "Nothing to change." << endl;
            }
            else 
            {
                a[position] = value;
            }
        }

        void display()
        {
            if(isEmpty())
            {
                cout << "\nNothing to display." << endl;
            }
            else
            {
                cout << "|-------|" << endl;
                for(int i = top; i >= 0; i--)
                {
                    cout << "   " << a[i] << endl;
                    cout << "|-------|" << endl;
                }
            }
        }
};
