// 17.03.24
// Runtime 0 ms Beats 100.00% of users with C++
// Memory 7.52 MB Beats 14.88% of users with C++	
class Solution {
public:
    int reverse(int x) {
        long reversed{};
        while (x) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        if (abs(reversed) > std::numeric_limits<int>::max()) return 0;
        return reversed;
    }
};
