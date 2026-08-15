class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (auto i = 0; i <= strs[0].length(); i++) {
            for (auto const& s : strs) {
                if (i == s.length() || s[i] != strs[0][i]) {
                    return s.substr(0, i);
                }
            }
        }
    }
};