class Solution {
public:
    bool isPalindrome(string s) {
        std::erase_if(s, [](unsigned char c) { return !std::isalnum(c); });

        return std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin(), [](char a, char b) {
                return std::tolower(a) == std::tolower(b);
            });
    }



};
