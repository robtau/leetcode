static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
            string s=to_string(x);
            int n=s.length();
            for(int i=0;i<n/2;i++) if(s[i]!=s[n-i-1]) return 0;
        }else{
            return 0;
        }
        return 1;
    }
};
