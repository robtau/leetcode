static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int roz=A.size();
        int poz=0;
        int m=-1;
        for(int i=0;i<roz;i++) if(A[i]>m) {m=A[i]; poz=i;} else break;
            return poz;
    }
};
