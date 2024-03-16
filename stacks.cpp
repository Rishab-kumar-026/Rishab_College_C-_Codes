// Program for implementation of Stacks
#include <iostream>
using namespace std;
#define MAX 2
class stack
{
public:
    int top;
    int arr[MAX];

    stack()
    {
        top = -1;
    }
    int push(int x);
    int pop();
    int isEmpty();
};

int stack::push(int x)
{
    if (top >= MAX)
    {
        cout << "Stack Overflow \n";
        return 0;
    }
    else
    {
        arr[++top] = x;
        cout << x << " pushed into the stack \n";
        return 1;
    }
}

int stack::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow \n";
        return 0;
    }
    else
    {
        int x = arr[top--];
        return x;
    }
}

int stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    struct stack rishab;
    rishab.push(10);
    rishab.push(20);
    rishab.push(30);
    rishab.push(40);
    rishab.push(50);
    cout << rishab.pop() << " popped from the Stack \n";
    cout << "Top item : " << rishab.arr[rishab.top];
    return 0;
}