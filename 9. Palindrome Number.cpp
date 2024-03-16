// 16.03.24
// Runtime 0 ms Beats 100% of users with C++
// Memory 8.21 MB Beats 45.42% of users with C++
static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        unsigned int reversed{};
        unsigned int copy = x;
        while (x) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return reversed == copy;
    }
};
