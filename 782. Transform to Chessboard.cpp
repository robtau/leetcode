class Solution {
public:
    int movesToChessboard(vector<vector<int>>& board) {
                int N=board[0].size();
        int rowSum=0,colSum=0,colSwap=0,rowSwap=0;
	
	    for(int i=0;i<N;i++){
        	rowSum+=board[0][i];
			colSum+=board[i][0];
			rowSwap+=board[0][i] == i%2;
			colSwap+=board[i][0] == i%2;
		}		
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
			if(board[0][0]^board[i][0]^board[0][j]^board[i][j])return -1;
			}
		}
        if (N / 2 > rowSum || rowSum > (N + 1) / 2) return -1;
        if (N / 2 > colSum || colSum > (N + 1) / 2) return -1;
        if (N % 2) {
            if (colSwap % 2) colSwap = N - colSwap;
            if (rowSwap % 2) rowSwap = N - rowSwap;
        }
        else {
            colSwap = min(N - colSwap, colSwap);
            rowSwap = min(N - rowSwap, rowSwap);
        }
        return (colSwap + rowSwap) / 2;	
    }
};
