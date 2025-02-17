
#include<iostream>
using namespace std;

bool function(string str1, string str2, int k){
    int n = str1.size();
    int m = str2.size();
    if(abs(n-m)>k){
        return false;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for (char c : str1){
        freq1[c - 'a']++;
    }
    for (char c : str2){
        freq2[c - 'a']++;
    }

    int diff = 0;
    for (int i = 0; i < 26; i++) {
        diff += abs(freq1[i] - freq2[i]);  
    }

    return diff / 2 <= k; 
}

int main(){
    
    string str1, str2;
    cin >> str1 >> str2;
    int k;
    cin >> k;
    bool flag = function(str1, str2, k);
    if(flag == false){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}
