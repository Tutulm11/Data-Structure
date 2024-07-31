#include <iostream>
using namespace std;

const int MaxSize = 100;

class MyQueue {
private:
    int Q[MaxSize];
    int front;
    int rear;

public:
    MyQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MaxSize - 1);
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue Overflow!" << endl;

       }
        else if (isEmpty()) {
            front =rear= 0;
            Q[rear] = element;

        }

       else
       {
           rear++;
            Q[rear] = element;

       }
    }



    void dequeue() {

        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;

        }
        else if(front==rear)
        {
            front=rear=-1;
        }
        else {
            front++;

        }
    }
     int Front() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return Q[front];
    }

    void Show() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;

        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; ++i) {
            cout << Q[i] << " ";
        }
        cout << endl;
    }

};

int main() {
    MyQueue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    queue.Show();
    cout << "Front element: " << queue.Front() << endl;

    queue.dequeue();

    queue.Show();
    cout << "Front element after dequeue: " << queue.Front() << endl;
     queue.dequeue();
     queue.Show();
    cout << "Front element after dequeue: " << queue.Front() << endl;

}

