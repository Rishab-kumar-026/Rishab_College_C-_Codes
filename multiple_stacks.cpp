#include <iostream>
using namespace std;
int i;
class multipleStack
{
    int *arr;
    int length;
    int top1, top2;

public:
    multipleStack(int n)
    {
        length = n;
        arr = new int[n];
        top1 = -1;
        top2 = length;
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack overflow \n";
        }
    }

    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack overflow \n";
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack underflow \n";
        }
    }

    int pop2()
    {
        if (top2 < length)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout << "Stack underflow \n";
        }
    }

    void printstack1()
    {
        for (i = top1; i >= 0; --i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void printstack2()
    {
        for (i = top2; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    multipleStack tommy(5);
    tommy.push1(100);
    tommy.push1(200);
    tommy.push2(300);
    tommy.push2(400);
    tommy.push2(500);


    cout << "Stack one: ";
    tommy.printstack1();
    cout << "Stack two: ";
    tommy.printstack2();

    cout << "Element popped from Stack one : " << tommy.pop1() << endl;
    cout << "Stack one after popping: ";
    tommy.printstack1();

    cout << "Element popped from Stack two : " << tommy.pop2() << endl;
    cout << "Stack two after popping: ";
    tommy.printstack2();

    return 0;
}