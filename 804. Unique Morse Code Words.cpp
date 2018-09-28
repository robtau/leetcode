class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        	int wynik=0;
	string litery[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	string w;
	map<string, int> m;
	int r=words.size();
	for(int i=0;i<r;i++){
		int a=words[i].length();
		for(int j=0;j<a;j++){
			w.append(litery[words[i][j]-97]);
		}
		if (m[w]!=1) {
		m[w]=1;
		wynik++;
	}
		w={""};
	}
	return wynik;
    }
};
