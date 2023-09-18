/**********************************************************************************************************************************************
 Author name   : Shahd Mohamed Attia
   Task name   : Tic Tac Toe
**************************************************************************************************************************************************/

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// Function to display the Tic Tac Toe
void display_board(char game_board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << game_board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool check_for_Win(char game_board[3][3], char symbol) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (game_board[i][0] == symbol && game_board[i][1] == symbol && game_board[i][2] == symbol) {
            return true;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (game_board[0][j] == symbol && game_board[1][j] == symbol && game_board[2][j] == symbol) {
            return true;
        }
    }

    // Check diagonals
    if (game_board[0][0] == symbol && game_board[1][1] == symbol && game_board[2][2] == symbol) {
        return true;
    }
    if (game_board[0][2] == symbol && game_board[1][1] == symbol && game_board[2][0] == symbol) {
        return true;
    }

    return false;
}

// Function to play the game
void Game() {
     char game_board[3][3] = { {'+', '+', '+'}, {'+', '+', '+'}, {'+', '+', '+'} };

    char Player = 'X';
    int moves = 0;

    while (moves < 9) {
        int row, col;

        // Display the game_board
        display_board(game_board);
        cout << "\n\n";
        cout << "Player '" << Player << "', enter your move (row and column respectively from 0 to 2): ";
        cin >> row >> col;

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3|| game_board[row][col] != '+' ) {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Make the move
        game_board[row][col] = Player;
        moves++;

        // Check if the current player has won
        if ( check_for_Win(game_board, Player)) {
            cout << "\n\n";
            cout << "Player '" << Player << "' wins!" << endl;
            display_board(game_board);
            return;
        }

        // Switch to the other player
        Player = (Player == 'X') ? 'O' : 'X';
    }

    // If all the moves have been made and no one has won, it's a tie
    cout << "It's a tie!" << endl;
    display_board(game_board);
}

int main() {
    string sent1 = "*** Welcome to Tic Tac Toe! *\n\n" ;
      for ( int i = 0 ; i < 33 ; ++i)
   {
    cout << sent1[i];


   }
    int play_again = 1 ;
    string sent2 = "P L A Y  A G A I N ?\n\n" ;
    do
    {
      Game();

      cout << "\n\n";

       for ( int i = 0 ; i < 22 ; ++i)
         {
           cout << sent2[i];

         }
      cout << "\n\n Would you like to play again(enter 1 for yes & 0 for no) \t";
      cin  >> play_again ;
    }
    while(play_again);

    cout << "\n\n G A M E  O V E R \n\n\n";
    return 0;
}
