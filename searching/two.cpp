#include <iostream>
using namespace std;

int twoAssignment(int arr[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x) {
            ans = mid;
            l = mid + 1; 
        } else {
            r = mid - 1;  
        }
    }
    return (ans == -1) ? 0 : ans + 1;  
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    while (k--) {
        int q;
        cin >> q;
        cout << twoAssignment(arr, n, q) << endl;
    }

    return 0;
}
