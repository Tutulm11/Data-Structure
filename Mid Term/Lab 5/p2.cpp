#include <iostream>
using namespace std;

class MyStack {
private:
    int *Stack;
    int Top;
    int MaxSize;

public:
    MyStack(int size ) {
        MaxSize = size;
        Stack = new int[MaxSize];
        Top = -1;
    }

    ~MyStack() {
        delete[] Stack;

    }

    bool isEmpty() {
        return (Top == -1);
    }

    bool isFull() {
        return (Top == MaxSize - 1);
    }

   void resize(int newMaxsize) {
        int *newStack = new int[newMaxsize];
        for (int i = 0; i <=Top; i++) {
            newStack[i] = Stack[i];
        }
        delete[] Stack;
       Stack = newStack;
        MaxSize = newMaxsize;
    }

    void push(int element) {
        if (isFull()) {
            resize(MaxSize * 2);

        }
        Top++;
        Stack[Top] = element;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        Top--;
    }

    int StackTop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return Stack[Top];
    }
     void show()
        {
            for(int i=Top;i>=0;i--)
            {
                cout<<Stack[i]<<endl;
            }
        }
};

int main() {
    MyStack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"\nStack:" <<endl;
    st.show();
    st.push(5);
    st.push(6);
    cout<<"\nStack:" <<endl;
    st.show();

    cout << "Top element: " << st.StackTop() << endl;

   st.pop();
    cout << "Top element after popping: " << st.StackTop() << endl;


}

