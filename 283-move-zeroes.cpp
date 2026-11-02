#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution obj;

    vector<int> nums = {0, 1, 0, 3, 12};

    obj.moveZeroes(nums);

    for (int val : nums) {
        cout << val << " ";
    }

    return 0;
}
