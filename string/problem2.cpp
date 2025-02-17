#include <iostream>
#include <algorithm>

using namespace std;

string encryptString(string s) {
    string encoded = "";
    int n = s.size();
    
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        int count = 1;
        
       
        for (int j = i + 1; j < n && s[j] == s[i]; j++) {
            count++;
            i++;  
        }
        
        encoded += ch + to_string(count);
    }
    

    reverse(encoded.begin(), encoded.end());
    
    return encoded;
}

int main() {
    string str;
    cin >> str;
    
    cout << encryptString(str);
    
    return 0;
}

