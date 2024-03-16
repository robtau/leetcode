// 16.03.23
// Runtime 0 ms Beats 100.00% of users with C++
// Memory 7.50 MB Beats 94.50% of users with C++
static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int lengthOfLastWord(std::string s) {
        auto i{0U};
        auto it = --s.end();
        while (*it == ' ' && it != s.begin()) {
            --it;
        }
        while (*it != ' ' && it != s.begin()) {
            ++i;
            --it;
        }
        return i + (it == s.begin() && *it != ' ');
    }
};
