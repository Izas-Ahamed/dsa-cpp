#include <bits/stdc++.h>
using namespace std;

bool solve(string s, vector<vector<char>> &board, string word, int i, int j)
{

    if (!s.compare(word))
        return true;

    if (i == -1 || i == board.size() || j == -1 || j == board[0].size() || board[i][j] == '0')
        return false;
    // cout << s << " " << i << endl;
    char temp = board[i][j];
    board[i][j] = '0';
    // up
    // cout << "up" << endl;
    bool up = solve(s + temp, board, word, i - 1, j);
    if (up)
        return up;

    // down
    // cout << "down" << endl;
    bool down = solve(s + temp, board, word, i + 1, j);
    if (down)
        return down;

    // right
    bool right = solve(s + temp, board, word, i, j + 1);
    if (right)
        return right;

    // left
    bool left = solve(s + temp, board, word, i, j - 1);
    if (left)
        return left;
    board[i][j] = temp;
    return false;
}

bool wordSearch(vector<vector<char>> &board, string word)
{
    string s;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (solve(s, board, word, i, j))
                return true;
        }
    }
    return false;
}

int main()
{

    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};
    string word = "EE";
    cout << wordSearch(board, word);
}