#include <iostream>
using namespace std;
#define size 5
class circular_queue
{
    int arr[size];
    int rear, front;

public:
    circular_queue();
    void add(int data);
    void remove();
    int is_full();
    int is_empty();
};

circular_queue::circular_queue()
{
    front = rear = size - 1;
}

int circular_queue::is_full()
{
    return front == (rear + 1) % size;
}

int circular_queue::is_empty()
{
    return front == rear;
}

void circular_queue::add(int data)
{
    if (!is_full())
    {
        rear = (rear + 1) % size;
        arr[rear] = data;
        cout << arr[rear] << " added \n";
    }
    else
    {
        cout << "Stack overflow \n";
    }
}

void circular_queue::remove()
{
    if (!is_empty())
    {
        front = (front + 1) % size;
        cout << arr[front] << " removed \n";
    }
    else
    {
        cout << "Stack underflow \n";
    }
}

int main()
{
    circular_queue rishab;
    rishab.add(26);
    rishab.add(32);
    rishab.add(43);
    rishab.add(56);
    rishab.remove();
    rishab.remove();
    return 0;
}