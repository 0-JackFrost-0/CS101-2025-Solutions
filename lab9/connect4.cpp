// Author: Om Godage
// Date: 15/3/25
#include <simplecpp>

// function to find whether the board is valid
// satisfying the turn rule and the gravity rule
bool isValid(vector<vector<char>>& board){
    int m = board.size(), n = board[0].size();

    // this checks the turn rule
    int redCount = 0, blueCount = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'R') redCount++;
            if (board[i][j] == 'B') blueCount++;
        }
    }
    if (!(redCount == blueCount || redCount == blueCount + 1)) 
        return false;

    // this checks the gravity rule
    for (int col = 0; col < n; col++) {
        bool foundEmpty = false;
        for (int row = m-1; row >= 0; row--) {
            if (board[row][col] == '.') 
                foundEmpty = true;
            else if (foundEmpty && board[row][col] != '.') 
                return false;
        }
    }

    return true;
}

// function to check if a player has won
bool checkDirection(vector<vector<char>>& board, int x, int y, int dx, int dy, char player, int m, int n) {
    for (int i = 0; i < 4; i++) {
        // if the coordinates (x, y) are out of bound
        // or the color doesnt match (i.e. no 4 consecutive elements of the same color)
        // then u return false
        if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] != player) {
            return false;
        }
        x += dx;
        y += dy;
    }
    return true;
}

bool checkWinner(vector<vector<char>>& board, char player) {
    int m = board.size(), n = board[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == player) {
                if (checkDirection(board, i, j, 1, 0, player, m, n) ||
                    checkDirection(board, i, j, 0, 1, player, m, n) ||
                    checkDirection(board, i, j, 1, 1, player, m, n) ||
                    checkDirection(board, i, j, 1, -1, player, m, n)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    // rows and columns
    int m, n; 
    cin >> m >> n;

    // input the board
    vector<vector<char>> board(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    // check for the gravity rule and turn order rule
    if(!isValid(board)){
        cout << "Invalid board\n";
        return 0;
    }

    bool redWins = checkWinner(board, 'R');
    bool blueWins = checkWinner(board, 'B');

    // Check invalid scenarios
    if (redWins && blueWins) {
        cout << "Invalid board\n";
    } else if (redWins) {
        cout << "Red won the game!\n";
    } else if (blueWins) {
        cout << "Blue won the game!\n";
    } else {
        cout << "No winner\n";
    }

    return 0;
}
