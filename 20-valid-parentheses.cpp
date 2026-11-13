#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                if (st.empty()) {
                    return false;
                }

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution obj;

    string s = "()[]{}";

    if (obj.isValid(s)) {
        cout << "Valid Parentheses";
    }
    else {
        cout << "Invalid Parentheses";
    }

    return 0;
}
