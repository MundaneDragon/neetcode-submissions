class Solution {
public:
    bool isAnagram(string s, string t) {

        // Quick check if its same size
        if (s.size() != t.size()) {
            return false;
        }

        auto letter_count = std::unordered_map<char,int>{};

        for (const auto& letter : s) letter_count[letter]++;

        for (const auto& letter : t) letter_count[letter]--;

        for (const auto& letter : letter_count) {
            if (letter.second != 0) return false;
        }


        return true;
    }
};
