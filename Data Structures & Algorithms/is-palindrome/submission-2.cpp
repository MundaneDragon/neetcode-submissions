class Solution {
public:
    bool isPalindrome(string s) {
        auto l = 0;
        auto r = static_cast<int>(s.length()) - 1;

        while (l < r) {
            while (l < r && !std::isalnum(s[l])) {
                l++;
            }
            while (r > l && !std::isalnum(s[r])) {
                r--;
            }
            
            auto leftChar = std::tolower(s[l]);
            auto rightChar = std::tolower(s[r]);

            if (leftChar != rightChar) {
                return false;
            }
            
            l++;
            r--;
        }
        
        return true;
    }



};
