#include<iostream>>
using namespace std;

struct Node{
    int data;
    Node *next;
};
class MyLinkedList{
private:
    Node* head;

public:
    MyLinkedList()
    {
        head=nullptr;
    }

     void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " into the list." << endl;
    }
    void traverse() {
        Node* current = head;
        cout << "Linked List elements: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    bool search(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void remove(int value) {
        if (head == nullptr) {
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }



};
int main()
{
    MyLinkedList list;
    list.insert(5);
    list.insert(6);
    list.insert(7);
    list.insert(8);
    list.insert(9);
    list.insert(10);
    list.traverse();
    int searchValue ;
    cout<<"\nEnter the search value "<<endl;
    cin>>searchValue;
    if (list.search(searchValue)) {
        cout << searchValue << " is found in the list." << endl;
    } else {
        cout << searchValue << " is not found in the list." << endl;
    }

    list.remove(10);
    cout << "After removing 10: ";
    list.traverse();
}
