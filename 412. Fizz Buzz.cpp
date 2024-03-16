// 16.03.2024
// Runtime 0 ms Beats 100.00% of users with C++
// Memory 10.22 MB Beats 20.90% of users with C++
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output;
        for (auto i = 1U; i <= n; ++i) {
            if (i % 15 == 0) {
                output.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                output.push_back("Fizz");
            } else if (i % 5 == 0) {
                output.push_back("Buzz");
            } else {
                output.push_back(to_string(i));
            }
        }
        return output;
    }
};
