#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void traversing(Node* head) {

    if(head==NULL)
    {
        cout<<"No elements."<<endl;
        return;
    }
    Node* ptr = head;
    while( ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void insertion(Node* &head, int item) {
    Node* newNode = new Node();
    newNode->data = item;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* ptr = head;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    cout << "Element " << item << " inserted\n";
}

void deletion(Node* &head, int item) {
    Node* temp = head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == item) {
        head = temp->next;
        delete temp;
        cout << "Element " << item << " deleted\n";
        return;
    }

    while (temp != NULL && temp->data != item) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Element not found\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Element " << item << " deleted\n";
}

void searching(Node* head, int item) {
    Node* ptr = head;
    int pos = 0;
    bool found = false;

    while (ptr != NULL) {
        if (ptr->data == item) {
            found = true;
            cout << "Element found at position " << pos << endl;
            break;
        }
        ptr = ptr->next;
        pos++;
    }

    if (!found) {
        cout << "Element not found\n";
    }
}

int main() {
    Node* head = NULL;
    int ch, item;

    do {
        cout << "Enter:\n1. Traversing\n2. Insertion\n3. Deletion\n4. Searching\n5. Exit\n";
        cin >> ch;

        switch(ch) {
            case 1:
                traversing(head);
                break;
            case 2:
                cout << "Enter element you want to insert: ";
                cin >> item;
                insertion(head, item);
                break;
            case 3:
                cout << "Enter element you want to delete: ";
                cin >> item;
                deletion(head, item);
                break;
            case 4:
                cout << "Enter element you want to search: ";
                cin >> item;
                searching(head, item);
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while (ch != 5);
    
    return 0;
}
