#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int val;
    int left, right;
};

vector<Node> tree;

void inOrder(int index) {
    if (index == -1) return;
    inOrder(tree[index].left);
    cout << tree[index].val << " ";
    inOrder(tree[index].right);
}

void preOrder(int index) {
    if (index == -1) return;
    cout << tree[index].val << " ";
    preOrder(tree[index].left);
    preOrder(tree[index].right);
}

void postOrder(int index) {
    if (index == -1) return;
    postOrder(tree[index].left);
    postOrder(tree[index].right);
    cout << tree[index].val << " ";
}

int main() {
    int n;
    cin >> n;
    tree.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> tree[i].val >> tree[i].left >> tree[i].right;
    }

    // In-order
    inOrder(0);
    cout << "\n";

    // Pre-order
    preOrder(0);
    cout << "\n";

    // Post-order
    postOrder(0);
    cout << "\n";

    return 0;
}
