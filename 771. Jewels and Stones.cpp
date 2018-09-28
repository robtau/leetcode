class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map <char,char> m;
		int j=J.length(), s=S.length(), wynik=0;
        for (int i=0;i<j;i++) m[J[i]]=1;
        for (int i=0;i<s;i++) if (m[S[i]]==1) wynik++;
    return wynik;
    }
};
