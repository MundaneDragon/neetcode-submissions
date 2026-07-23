class Solution {
public:
    bool isPalindrome(string s) {
        auto l = 0; 
        auto r = static_cast<int>(s.length()) - 1;

        while (l < r) {
            while (l < r && !alphaNum(s[l])) {
                l++;
            }
            while (r > l && !alphaNum(s[r])) {
                r--;
            }
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++; r--;
        }
        return true;
    }

    auto alphaNum(char c) -> bool {
        return (c >= 'A' && c <= 'Z') || 
                (c >= 'a' && c <= 'z') ||
                (c >= '0' && c <= '9');
    }
};