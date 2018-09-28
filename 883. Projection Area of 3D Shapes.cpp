class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
               int r=grid[0].size();
		int shadow=0, x=0,y=0;
		for(int i=0;i<r;i++){
        	for(int j=0;j<r;j++){
        		if(grid[i][j]>x) x=grid[i][j];
        		if(grid[j][i]>y) y=grid[j][i];
				if(grid[i][j]!=0) shadow++;
			}
			shadow+=x;
			shadow+=y;
			x=0;
			y=0;
		}
		return shadow;
    }
};
