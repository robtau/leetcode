//Runtime 4 ms Beats 97.94%
//Memory 5.9 MB Beats 62.75%
static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;
       if(x<9) return true;
       auto liczba = x;
       int n {0};
       while (liczba>0){
        liczba/=10;
        n++;
       }
       int tab[n];
       for (int i=0; x>0; i++){
        tab[i]=x%10;
        x/=10;
       }
       for(int i=0; i<n; i++)
       if(tab[i]!=tab[n-i-1]) return (i>=n-i-1)?true:false; 
       return true;      
    }
};
