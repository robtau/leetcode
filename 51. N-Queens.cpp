class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        int x=kol(0,n);
        return rozw;
    }
    int XD=0;
    vector<vector<string>> rozw;
    bool tab[20][20]={};
bool sprawdz(int x, int y, int n){
	for(int i=0;i<n;i++){
		if(tab[x][i]==1) return false;
	}
	for(int i=0;i<n;i++){
		if(tab[i][y]==1) return false;
	} 
	for(int i=0;max(x+i,y+i)<n;i++){
		if(tab[x+i][y+i]==1) return false;
	}
	for(int i=0;min(x-i,y-i)>-1;i++){
		if(tab[x-i][y-i]==1) return false;
	}
	for(int i=0;y+i<n && x-i>-1;i++){
		if(tab[x-i][y+i]==1) return false;
	}
	for(int i=0;x+i<n && y-i>-1;i++){
		if(tab[x+i][y-i]==1) return false;
	}	
	return true;
}
int kol(int i, int n){
	if(i==n){
		vector<string> X;
        rozw.push_back (X);
        for(int i=0;i<n;i++){
        	string s={};
            for(int j=0;j<n;j++){
                if(tab[i][j])  s+="Q";
                else
                   s+="."; 
                //dopisuj stringa
            }
            rozw[XD].push_back(s);
        }
        XD++;
		return 1;
	}
	int X=0;
	for(int j=0;j<n;j++){
		if (sprawdz(i,j,n)){
			tab[i][j]=1;
			X+=kol(i+1,n);
			tab[i][j]=0;
		}
	}
	return X;
}
};
