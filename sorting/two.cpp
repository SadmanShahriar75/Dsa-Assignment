#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n+1];  
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    while (m--) {
        int post_no, like_increase;
        cin >> post_no >> like_increase;

        a[post_no] += like_increase; 

    
        int max_likes = -1, max_index = -1;
        for (int i = 1; i <= n; i++) {
            if (a[i] > max_likes) {
                max_likes = a[i];
                max_index = i;
            }
        }

        cout << max_index << " " << max_likes << endl;
    }

    return 0;
}
