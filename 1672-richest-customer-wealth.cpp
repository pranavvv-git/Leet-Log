#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int wealth = 0;

            for (int j = 0; j < accounts[i].size(); j++) {
                wealth += accounts[i][j];
            }

            if (wealth > maxWealth) {
                maxWealth = wealth;
            }
        }

        return maxWealth;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    };

    cout << sol.maximumWealth(accounts) << endl;

    return 0;
}
