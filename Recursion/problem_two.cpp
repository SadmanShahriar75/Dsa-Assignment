#include <iostream>

using namespace std;

char findKthCharacter(int k, char current = 'a') {
    if (k == 1) {
        return current; 
    }

    int length = 1; 
    while (length * 2 < k) {
        length *= 2;
    }

    if (k <= length) {
        return findKthCharacter(k, current); 
    } else {
        char nextChar = 'a' + (current - 'a' + 1) % 26; 
        return findKthCharacter(k - length, nextChar); 
    }
}

int main() {
    int k;
    cin >> k;
    cout << findKthCharacter(k) << endl;
    return 0;
}
