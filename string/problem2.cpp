#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string encryptString(string s) {
    string encoded = "";
    int n = s.size();
    
    for (int i = 0; i < n; ) {
        char ch = s[i];
        int count = 1; 
        
        for (int j = i + 1; j < n && s[j] == ch; j++) {
            count++;
        }

        encoded += ch + to_string(count);
        i += count;
    }

    reverse(encoded.begin(), encoded.end());
    return encoded;
}

string decryptString(string encrypted) {
    reverse(encrypted.begin(), encrypted.end());
    string original = "";
    int n = encrypted.size();
    
    for (int i = 0; i < n; ) {
        char ch = encrypted[i];
        string countStr = "";
        
        for (int j = i + 1; j < n && isdigit(encrypted[j]); j++) {
            countStr += encrypted[j];
        }

        int count = stoi(countStr);

        for (int k = 0; k < count; k++) {
            original += ch;
        }

        i += 1 + countStr.length();
    }
    
    return original;
}

int main() {
    string S;
    cin >> S;

    string encrypted = encryptString(S);
    cout << encrypted << endl;

    string decrypted = decryptString(encrypted);
    cout << decrypted << endl;

    return 0;
}
