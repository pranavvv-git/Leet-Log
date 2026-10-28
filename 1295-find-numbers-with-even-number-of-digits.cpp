#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            int digits = 0;

            while (num > 0) {
                digits++;
                num /= 10;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << sol.findNumbers(nums) << endl;

    return 0;
}
