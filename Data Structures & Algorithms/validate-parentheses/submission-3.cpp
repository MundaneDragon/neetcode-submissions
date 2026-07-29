static const auto fastIO = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool isValid(std::string s) {
        if (s.length() % 2 != 0) return false;
        int top = 0; 
        for (char c : s) {
            switch (c) {
                case '(': s[top++] = ')'; break;
                case '{': s[top++] = '}'; break;
                case '[': s[top++] = ']'; break;
                default:
                    if (top == 0 || s[--top] != c) return false;
            }
        }
        return top == 0;
    }
};