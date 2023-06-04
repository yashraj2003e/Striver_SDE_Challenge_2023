void setit(vector<pair<int,int>> k, vector<vector<int>>& matrix, int r, int c) {
    for (int i = 0; i < k.size(); i++) {
        int row = k[i].first;
        int col = k[i].second;

        for (int j = 0; j < r; j++) {
            matrix[j][col] = 0;
        }

        for (int j = 0; j < c; j++) {
            matrix[row][j] = 0;
        }
    }
}

void setZeros(vector<vector<int>>& matrix) {
    int r = matrix.size();
    int c = matrix[0].size();
    vector<pair<int,int>> k;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == 0)
                k.push_back({i, j});
        }
    }

    setit(k, matrix, r, c);
}
