#include <iostream>
#include <vector>
using namespace std;

bool isSelfDividing(int num) {
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit == 0 || num % digit != 0) {
            return false;
        }

        temp /= 10;
    }

    return true;
}

int main() {
    int left = 1;
    int right = 22;

    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
