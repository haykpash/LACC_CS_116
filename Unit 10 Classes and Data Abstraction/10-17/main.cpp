#include <iostream>

#include "TicTacToe.h"

using namespace std;

int main() {
     
    TicTacToe game;
    int row, col;

    cout << "Tic-Tac-Toe Game" << endl;
    cout << "Player X starts first." << endl;

    while (true) {

        game.printBoard();

        cout << "Player " << game.currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (game.makeMove(row - 1, col - 1)) {

            if (game.checkWin()) {

                char winner = game.currentPlayer == 'X' ? 'O' : 'X';

                cout << "Player " << winner << " wins!" << endl;
                break;
            }

        } else {

            cout << "Invalid move. Try again." << endl;
            
        }
    }

    game.printBoard();

    return 0;
};

