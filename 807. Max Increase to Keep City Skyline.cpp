class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        	int maxIncreaseKeepingSkyline=0;
	int r=grid.size();
	int X[r]={}, Y[r]={};
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			Y[i]=max(Y[i], grid[i][j]);
			X[i]=max(X[i], grid[j][i]);
		}
	}
	for(int i=0;i<r;i++)
	for(int j=0;j<r;j++)
	maxIncreaseKeepingSkyline+=min(X[j],Y[i])-grid[i][j];
    return maxIncreaseKeepingSkyline;
    }
};
