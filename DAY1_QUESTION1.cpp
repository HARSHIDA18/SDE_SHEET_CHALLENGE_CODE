#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    vector<vector<int>> answer;
    int n=matrix.size();
    int m=matrix[0].size();
    // Set all elements of answer array as 1
    for (int i = 0; i < n; i++) {
        vector<int> curr;
        for (int j = 0; j < m; j++) {
            curr.push_back(1);
        }
        answer.push_back(curr);
    }
        
    // Traverse row wise
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                for (int k = 0; k < m; k++) {
                    answer[i][k] = 0;
                }
                break;
            }
        }
    }
        
    // Traverse column wise
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == 0) {
                for (int k = 0; k < n; k++) {
                    answer[k][j] = 0;
                }
            }
        }
    }
        
    // Update the elements in matrix array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (answer[i][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
}