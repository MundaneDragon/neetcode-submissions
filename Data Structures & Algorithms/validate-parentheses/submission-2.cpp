class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) return false;

        char st[s.length()];
        int top = 0;

        for (char c : s) {
            switch (c) {
                case '(': st[top++] = ')'; break;
                case '{': st[top++] = '}'; break;
                case '[': st[top++] = ']'; break;
                default:
                    if (top == 0 || st[--top] != c) return false;
            }
        }

        return top == 0;
    }
};
