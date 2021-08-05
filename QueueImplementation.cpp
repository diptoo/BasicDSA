//Resource - Coding Minutes Udemy

#include <iostream>
using namespace std;

void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Queue
{
    int *arr; //run time memory allocation
    int currentSize;
    int maxSize;
    int front;
    int rear;

public:
    Queue(int size = 5)
    {
        maxSize = size;
        arr = new int[maxSize];
        currentSize = 0;
        front = 0;
        rear = maxSize - 1;
    }
    bool isFull()
    {
        return currentSize == maxSize;
    }
    bool isEmpty()
    {
        return currentSize == 0;
    }
    void push(int item)
    {
        if (!isFull())
        {
            rear = (rear + 1) % maxSize;
            arr[rear] = item;
            currentSize++;
            cout << item << " is pushed" << endl;
        }
        else
        {
            cout << item << " can't be pushed" << endl;
        }
    }
    void pop()
    {
        if (!isEmpty())
        {
            cout << arr[front] << " is popped" << endl;
            front = (front + 1) % maxSize;
            currentSize--;
        }
    }
    int getFront()
    {
        return arr[front];
    }
};

int main()
{
    fileIO();
    Queue myQueue(7);

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);
    myQueue.push(6);
    myQueue.push(7);
    myQueue.push(8);

    myQueue.pop();
    myQueue.pop();

    myQueue.push(9);

    while (!myQueue.isEmpty())
    {
        cout << myQueue.getFront() << endl;
        myQueue.pop();
    }
}