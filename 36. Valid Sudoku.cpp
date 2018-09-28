static const auto io_sync_off = []() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return nullptr;
}();
class Solution {
public:
bool isValidSudoku(vector<vector<char>>& board) {
	char x;
    bool tab[9][9][3]={false};
    for(int i=0;i<9;i++) for(int j=0;j<9;j++){
        if(board[i][j]!='.'){
            int r=i/3*3+j/3;
            int x=board[i][j]-49;
            if(tab[i][x][0] || tab[j][x][1] || tab[r][x][2]){
                return false;
            }else{
               tab[i][x][0]=tab[j][x][1]=tab[r][x][2]=true;
            }
        }
    }
    return true;
}
};
