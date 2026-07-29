class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;

        for (const char c : s) {
            if (c == ')' || c == '}' || c == ']') {
                if (!stack.empty()) {
                    if (stack.top() == '(' && c == ')') {
                        stack.pop();
                    } else if (stack.top() == '{' && c == '}') {
                        stack.pop();
                    } else if (stack.top() == '[' && c == ']') {
                        stack.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }

        }

        return stack.empty();
    }
};
