#include <iostream>
using namespace std;


struct Node {
    char data;
    Node* prev;
    Node* next;
    
    Node(char val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};


Node* numberToDoublyLinkedList(int n) {
    string num = to_string(n);  
    Node* head = new Node(num[0]);  
    Node* temp = head;
    
    for (int i = 1; i < num.size(); i++) {
        Node* newNode = new Node(num[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }
    
    return head; 
}


int doublyLinkedListToNumber(Node* head) {
    string num = "";
    Node* temp = head;
    
    while (temp) {
        num += temp->data;
        temp = temp->next;
    }
    
    return stoi(num); 
}


void printDoublyLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    Node* head = numberToDoublyLinkedList(n);

    cout << "Doubly Linked List: ";
    printDoublyLinkedList(head);


    cout << "Extracted Number: " << doublyLinkedListToNumber(head) << endl;

    return 0;
}
