#include <iostream>
using namespace std;

// TOWER OF HANOI
/*
void towerOfHanoi(int n, char source, char helper, char destination)
{
    if (n == 1)  //base case
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, helper);  //recursive case
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
    int n = 3;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}*/

// Eight Queens Problem
#define N 8

bool isSafe(int board[N][N], int row, int col) {

    // check column
    for (int i = 0; i < row; i++)
        if (board[i][col])
            return false;

    // check left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // check right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
        if (board[i][j])
            return false;

    return true;
}

bool solve(int board[N][N], int row) {

    // all queens placed
    if (row == N)
        return true;

    for (int col = 0; col < N; col++) {

        if (isSafe(board, row, col)) {

            board[row][col] = 1;   // place queen

            if (solve(board, row + 1))
                return true;

            board[row][col] = 0;   // BACKTRACK (remove queen)
        }
    }
    return false;
}

int main() {
    int board[N][N] = {0};

    if (solve(board, 0)) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    } else {
        cout << "No solution!";
    }

    return 0;
}
