#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;

};
node* head,* tptr;
void create(int data)
{
    node *nptr;

        nptr=new node;
        nptr->data=data;
        nptr->next=nullptr;
        if(head==NULL)
        {
            head=tptr=nptr;
        }
        else
        {
            tptr->next=nptr;
            tptr=nptr;
        }
}

void insertAtBeg(int data)
{
    node* nptr;
    nptr= new node;
    nptr->data=data;
    nptr->next=head;
    head=nptr;
}

void insertAtEnd(int data)
{
    node* nptr;
    nptr= new node;
    nptr->data=data;
    nptr->next=nullptr;
    tptr=head;
    while(tptr->next!=nullptr)
    {
        tptr=tptr->next;
    }
    tptr->next=nptr;

}

void insertAtPosi(int pos,int data)
{

    node* nptr;
    nptr=new node;
    int i=1;
    nptr->data=data;

    if(pos < 1) {
        cout << "Invalid position!\n";
        return;
    }
    else if(pos == 1) {

        insertAtBeg(data);
    }
    else
    {
    tptr=head;
    while(i<pos-1 && tptr != nullptr)
    {
        tptr=tptr->next;
        i++;
    }

    nptr->next=tptr->next;
    tptr->next=nptr;
    }

}

void delfromBeg()
{

    if(head!=nullptr)
    {
        node * temp;
        temp=head;
        head=head->next;
        delete temp;
    }
}
void delfromEnd()
{
    node* temp;
    temp=head;
    while(temp->next!=nullptr)
    {
        tptr=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
    }
    else
    {
        tptr->next=nullptr;
    }
    delete temp;
}


void delfromPosi(int pos) {
    if (pos < 1) {
        cout << "Invalid position!\n";
        return;
    }

    if (pos == 1) {
        delfromBeg();
        return;
    }

    int i = 1;
    node* tptr = head;
    while (i < pos - 1 && tptr != nullptr) {
        tptr = tptr->next;
        i++;
    }

    if (tptr == nullptr || tptr->next == nullptr) {
        cout << "Position out of range!\n";
        return;
    }

    node* temp = tptr->next;
    tptr->next = temp->next;
    delete temp;
}
bool search(int value) {
        node* cptr = head;
        while (cptr != nullptr) {
            if (cptr->data == value) {
                return true;
            }
            cptr = cptr->next;
        }
        return false;
    }

void traverse()
{
    tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }
}



int main()
{
    int data,pos,searchValue;

    create(11);
    create(21);
    create(31);
    create(41);
    create(51);
    cout << "Linked list: ";
    traverse();

     insertAtBeg(10);
     cout << "\nLinked list After insert data at beginning : ";
     traverse();

     cout<<"\nEnter the position = ";
     cin>>pos;
     insertAtPosi(pos,23);
     cout << "\nLinked list After insert data at position : ";
     traverse();
    cout<<"\nEnter the searching data = ";
    cin>>searchValue;
    if (search(searchValue)) {
        cout << searchValue << " is found in the list." << endl;
    } else {
        cout << searchValue << " is not found in the list." << endl;
    }

    cout << "\nDeleting from the beginning...\n";
    if (head != nullptr) {
        delfromBeg();
    } else {
        cout << "List is empty. No node to delete.\n";
    }

    cout << "Linked list after deletion: ";
    traverse();

    cout << "\nDeleting from the specefic position...\n";
    cout<<"\nEnter the position = ";
    cin>>pos;
    delfromPosi(pos);
    cout << "Linked list after deletion: ";
    traverse();
}

