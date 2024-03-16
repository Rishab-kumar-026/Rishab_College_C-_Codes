#include <iostream>
using namespace std;
class queues
{
private:
    int rear, front;
    int arr_queue[20];
    int max;

public:
    queues()
    {
        rear = front = -1;
        max = 20;
    }

    int is_empty();
    int add(int x);
    int delete_item();
    int is_full();
};

int queues::is_empty()
{
    if (rear == front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int queues::is_full()
{
    if (rear == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int queues::add(int x)
{
    if (!is_full())
    {
        ++rear;
        arr_queue[rear] = x;
        cout << x << " added \n";
    }
}

int queues::delete_item()
{
    if (!is_empty())
    {
        ++front;
        int x = arr_queue[front];
       cout<<"Item deleted: ";
        return x;
    }
}



int main()
{
    queues rishab;
    rishab.add(100);
    rishab.add(200);
    rishab.add(300);
    cout << rishab.delete_item() << endl;
    rishab.add(400);
    cout << rishab.delete_item() << endl;
    cout << rishab.delete_item() << endl;
    cout << rishab.delete_item() << endl;
    rishab.add(500);
    rishab.add(600);

    return 0;
}