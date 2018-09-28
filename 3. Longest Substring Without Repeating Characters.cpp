static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	int maks=0, k=0, n=s.length();
	map<char,int> m;
	for(int i=0;i<n;i++){
		if(m[s[i]]==0 || m[s[i]]-1<i-k){
			k++;
			maks=max(k,maks);
		}else{		
			k=i-m[s[i]]+1;
		}
		m[s[i]]=i+1;
	}
	return maks;
    }
};
