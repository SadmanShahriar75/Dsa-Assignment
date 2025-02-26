#include <iostream>
using namespace std;

bool isPowerOfFive(int n)
{
    if (n <= 0)
        return false;
    if (n == 1)
        return true;

    if (n % 5 != 0)
        return false;
    return isPowerOfFive(n / 5);
}

int main()
{
    int n;
    cin >> n;

    if (isPowerOfFive(n) == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}