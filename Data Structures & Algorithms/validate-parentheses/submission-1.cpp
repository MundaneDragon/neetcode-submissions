class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) return false;

        std::stack<char> stack;

        for (char c : s) {
            if (c == '(')      stack.push(')');
            else if (c == '{') stack.push('}');
            else if (c == '[') stack.push(']');
            else if (stack.empty() || stack.top() != c) return false;
            else               stack.pop();
        }

        return stack.empty();
    }
};
