#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, amount;
    cin >> n;
    vector<int> coins(n);
    for(int i = 0; i < n; i++) cin >> coins[i];
    cin >> amount;

    sort(coins.rbegin(), coins.rend()); 

    int count = 0;
    for(int i = 0; i < n; i++) {
        while(amount >= coins[i]) {
            amount -= coins[i];
            count++;
        }
    }

    if(amount == 0) cout << count << endl;
    else cout << -1 << endl; 

    return 0;
}
