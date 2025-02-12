#include <iostream>

using namespace std;

void generatePascalsTriangle(int numRows) {
    int pascal[numRows][numRows];

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) 
                pascal[i][j] = 1;  // প্রথম ও শেষ মান সবসময় 1
            else 
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];  // আগের row-এর উপর ভিত্তি করে মান বসানো
            
            cout << pascal[i][j] << " ";  // মান প্রিন্ট করা
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    generatePascalsTriangle(numRows);

    return 0;
}
