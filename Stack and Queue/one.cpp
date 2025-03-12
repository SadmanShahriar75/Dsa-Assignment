#include <iostream>
#include <stack>
using namespace std;

void nextSmallerElement(int arr[], int n) {
    stack<int> s;
    int result[n];

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        result[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    nextSmallerElement(arr, n);
    return 0;
}
