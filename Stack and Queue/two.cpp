#include <bits/stdc++.h>
using namespace std;

class QueueUsingTwoStacks {
private:
    stack<int> stack1, stack2;

    void shiftStack1toStack2() {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

public:
    void enqueue(int x) {
        stack1.push(x);
    }

    void dequeue() {
        if (stack2.empty()) {
            shiftStack1toStack2();
        }
        if (!stack2.empty()) {
            cout << stack2.top() << endl;
            stack2.pop();
        } else {
            cout << "-1" << endl;
        }
    }

    void front() {
        if (stack2.empty()) {
            shiftStack1toStack2();
        }
        if (!stack2.empty()) {
            cout << stack2.top() << endl;
        } else {
            cout << "-1" << endl;
        }
    }
};

int main() {
    int q;
    cin >> q;
    QueueUsingTwoStacks queue;
    
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            queue.enqueue(x);
        } else if (type == 2) {
            queue.dequeue();
        } else if (type == 3) {
            queue.front();
        }
    }
    
    return 0;
}
