class Solution {
    bool check(vector<vector<char>>& board, int is, int js) {
        set<char> s;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << i + is << j + js << " ";
                if (s.find(board[i + is][j + js]) != s.end())
                    return false;
                if (board[i + is][j + js] != '.')
                    s.insert(board[i + is][j + js]);
            }
        }
        return true;
    }

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            set<char> s1;
            set<char> s2;
            for (int j = 0; j < 9; j++) {
                if (s1.find(board[i][j]) != s1.end() ||
                    s2.find(board[j][i]) != s2.end())
                    return false;
                if (board[i][j] != '.')
                    s1.insert(board[i][j]);
                if (board[j][i] != '.')
                    s2.insert(board[j][i]);
            }
        }
        if (!check(board, 0, 0))
            return false;
        if (!check(board, 0, 3))
            return false;
        if (!check(board, 0, 6))
            return false;
        if (!check(board, 3, 0))
            return false;
        if (!check(board, 3, 3))
            return false;
        if (!check(board, 3, 6))
            return false;
        if (!check(board, 6, 0))
            return false;
        if (!check(board, 6, 3))
            return false;
        if (!check(board, 6, 6))
            return false;

        return true;
    }
};
