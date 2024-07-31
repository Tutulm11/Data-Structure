#include<iostream>
using namespace std;
const int MaxSize=10;
class MyStack
{
    private:
     int Stack[MaxSize];
     int top;

    public:
    MyStack()
        {
            top=-1;
        }
    bool isEmpty()
        {
            if(top==-1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

    bool isFull()
        {
            if(top==MaxSize-1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        void push(int value)
        {
            if(isFull())
            {
                cout<<"Stack is overflow: "<<endl;
            }
            else
                {
                    top++;
                    Stack[top]=value;


            }
        }

        int pop()
        {
            int x=-1;

            if(isEmpty())
            {
                cout<<"Stack underflow! "<<endl;
            }
            else
            {

                x=Stack[top];
                  top --;

            }
            return x;
        }
        int StackTop()
        {
            if(isEmpty())
            {
                cout<<"Empty Stack! "<<endl;
                return -1;
            }
            else{
                return Stack[top];
            }
        }
        void show()
        {
            for(int i=top;i>=0;i--)
            {
                cout<<Stack[i]<<endl;
            }
        }
};

int main()
{
    MyStack st;

    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    cout<<"\nStack:" <<endl;
    st.show();
    cout<<"\nTop Element of the Stack:\n" << st.StackTop() << endl;

    st.pop();
    st.pop();
    cout<<"\nTop Element of the Stack:\n" << st.StackTop() << endl;
    cout<<"\nStack:" <<endl;
    st.show();

    st.pop();
    cout<<"\nTop Element of the Stack:\n" << st.StackTop() << endl;
    cout<<"\nStack:" <<endl;
    st.show();
}
