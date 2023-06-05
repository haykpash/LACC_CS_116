#ifndef H_TicTacToe
#define H_TicTacToe

#include <iostream>

using namespace std;

class TicTacToe {

private:
    char board[3][3];

public:

    char currentPlayer;

    TicTacToe() {
        
        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {
                
                board[i][j] = ' ';
            }
        }

        currentPlayer = 'X';
    }
    
    void printBoard() {

        cout << "-------------" << endl;

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << "| " << board[i][j] << " ";
            }

            cout << "|" << endl;
            cout << "-------------" << endl;
        }
    }

    bool makeMove(int row, int col) {

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {

            return false;

        }

        board[row][col] = currentPlayer;

        currentPlayer = currentPlayer == 'X' ? 'O' : 'X';

        return true;
    }

    bool checkWin() {
       
        for (int i = 0; i < 3; i++) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
                return true;
            }   
        }
        for (int j = 0; j < 3; j++) {
            if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
                return true;
            }
        }

        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            return true;
        }

        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            return true;
        }

        return false;
    }

};

#endif
