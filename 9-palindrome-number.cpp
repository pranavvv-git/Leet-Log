#include <iostream>
using namespace std;

int main() {
    int x = 121;
    int original = x;
    long long reverse = 0;

    if (x < 0) {
        cout << false;
        return 0;
    }

    while (x > 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }

    cout << (original == reverse);
    return 0;
}
