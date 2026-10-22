// Q) 1342. Number of Steps to Reduce a Number to Zero ?

#include <iostream>
using namespace std;

int main() {
    int num = 14;
    int steps = 0;

    while (num > 0) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num - 1;
        }
        steps++;
    }

    cout << steps << endl;
    return 0;
}