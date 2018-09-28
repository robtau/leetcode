class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
solve(board);
		}
bool sprawdz(vector<vector<char>>& board ,int w, int k, int c){
	for(int i=0;i<9;i++) if(board[w][i]==c || board[i][k]==c)  return false;
	int a=w-w%3, b=k-k%3;
	for(int i=a;i<a+3;i++) for(int j=b;j<b+3;j++) if(board[i][j]==c) return false;
	return true;
}
bool wolneMiejsca(vector<vector<char>>& board, int &x, int &y){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if (board[i][j]=='.'){
				x=i;
				y=j;
				return true;
			}
		}
	}
	return false;
} 
bool solve(vector<vector<char>>& board) {
        int x,y;
		if(!wolneMiejsca(board,x,y)) return true;
		for(int i=1;i<=9;i++){
			if(sprawdz(board, x,y,i+48)){
				board[x][y]=i+48;
				if (solve(board)) return true;
				board[x][y]='.';
			}
		}
		return false;
}
};
