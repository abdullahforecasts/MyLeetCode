class Solution {
public:
   void rotate(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();

    
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) { 
            swap(matrix[i][j], matrix[j][i]);
        }
    }

   
	for (int i = 0; i < matrix.size(); i++)reverse(matrix[i].begin(), matrix[i].end()); 
		
	
}

};