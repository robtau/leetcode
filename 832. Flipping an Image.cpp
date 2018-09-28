class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
 		int x=A[0].size();
    	int y=A.size();
    	for(int i=0;i<y;i++){
    		reverse(A[i].begin(), A[i].end());
    		for(int j=0;j<x;j++){
			    if(A[i][j]==1) A[i][j]=0;
                else{
                    A[i][j]=1;
                }
	}
	}
return A;
    }
};
