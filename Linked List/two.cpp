#include <iostream>
#include <unordered_set>
using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    
    ListNode(int val){
        this->val = val;
        this->next = nullptr;
    }
};


void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


ListNode* removeElements(ListNode* head, unordered_set<int>& values) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy, * curr = head;

    while (curr) {
        if (values.count(curr->val)) {
            prev->next = curr->next;   
            delete curr;
        } else {
            prev = curr; 
        }
        curr = prev->next;
    }
    
    return dummy->next;
}


ListNode* createLinkedList(int n) {
    if (n == 0) return nullptr;
    ListNode* head = nullptr, * tail = nullptr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        if (!head) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int main() {
    int n, m;


    cout << "Enter size of array: ";
    cin >> n;
    unordered_set<int> values;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        values.insert(x);
    }


    cout << "Enter size of linked list: ";
    cin >> m;
    cout << "Enter linked list elements: ";
    ListNode* head = createLinkedList(m);


    head = removeElements(head, values);

    cout << "Modified linked list: ";
    printList(head);

    return 0;
}
