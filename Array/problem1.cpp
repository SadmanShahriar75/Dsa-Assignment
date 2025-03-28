#include <iostream>

using namespace std;

void pascalsTriangle(int numRows) {
    int pascal[numRows][numRows];

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) 
                pascal[i][j] = 1;
            else 
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]; 
            
            cout << pascal[i][j] << " "; 
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    pascalsTriangle(numRows);

    return 0;
}
