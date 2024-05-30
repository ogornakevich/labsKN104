#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}


void appendNode(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}


int sumPositiveElements(Node* head) {
    int sum = 0;
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data > 0) {
            sum += temp->data;
        }
        temp = temp->next;
    }
    return sum;
}

int main() {
    Node* head = nullptr;

    
    appendNode(head, 3);
    appendNode(head, -1);
    appendNode(head, 4);
    appendNode(head, -2);
    appendNode(head, 5);

    
    cout << "List: ";
    printList(head);

    
    int sum = sumPositiveElements(head);
    cout << "Sum of positive elements: " << sum << endl;

    return 0;
}