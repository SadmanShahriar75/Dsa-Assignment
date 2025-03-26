#include <bits/stdc++.h>
using namespace std;

// normal learner searching..........
int oneAssigment(vector<int> &arr, int n, int a, int b){
    int count = 0 ;
    for(int i=0; i<n; i++){
        if(arr[i]>=a && arr[i]<=b){
            count++;
        }
    }
    return  count;
}



//////

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;
    while(k--){
        int a, b;
        cin >> a >> b;
        cout << oneAssigment(arr, n, a, b);
    }
    return 0;
}