#include <iostream>
#include <cstdlib>
using namespace std;

void rule();
bool flipCoin();
int rowToIndex(string);
int colToIndex(string);
char checkForFive(char[][10]); 
void showBoard(char[][10]);
bool moveValid(int, int, char[][10]);


int main() {
    //Game Intro
    string input;
    string player1, player2;
    cout << "Hello! This is a two-player gomoku.\n";
    cout << "Do you want to read the rules? (yes/no): ";
    cin >> input;
    if (input == "yes" || input == "y" || input == "Y" || input == "YES" || input == "Yes") {
        rule();
    }
    cout << "\nPlease Enter your names \n";
    cout << "\tPlayer 1: ";
    cin >> player1;
    cout << "\tPlayer 2: ";
    cin >> player2;
    cout << endl;

    //Game Setup 
    char board[10][10] = {
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    };
    int r, c;
    bool player;
    string name;

    cout << "You will flip a coin to decide who goes first...\n";
    cout << "If it's head, " << player1 << " will go first.\n";
    cout << "If it's tail, " << player2 << " will go first.\n";
    player = flipCoin();
    if (player)
        cout << "It's head.";
    else 
        cout << "It's tail.";
    cout << endl << endl;

    //Game Content
    showBoard(board);
    do {
        do {
            if (player)
                name = player1;
            else
                name = player2;
            cout << name << ", ";
            cout << "where do you want to place your piece? ";
            cin >> input;
            r = rowToIndex(input);
            c = colToIndex(input);
        } while (!moveValid(r, c, board));
        //place piece
        if (player) {
            board[r][c] = 'X';
        }
        else {
            board[r][c] = 'O';
        }
        player = !player;
        showBoard(board);
    } while (checkForFive(board) == ' ');
    //announce winner 
    cout << name << " wins!\n";
}

void rule() {
    cout << "\tThis is a two-player game, if you don't have a partner to play with, grab a friend first.\n"
            "\tYou will each place a piece on the 10x10 board. Your aim is to get five in a row before\n"
            "\tyour friend does. The row can be horizontal, vertical, or diagonal. I will announce the\n"
            "\twinner. To place a piece, enter the coordinate (eg A1) on your turn. Have fun!" << endl;
}

bool flipCoin() {
    srand(time(0));
    return rand() % 2;
}

void showBoard(char board[][10]) {
    cout << " ";
    for (int i = 1; i <= 10; i++) {
        cout << "   " << i;
    }
    cout << endl;
    for (int r = 0; r < 10; r++) {
        cout << "  +---------------------------------------+\n";
        cout << (char)('A' + r) << " | ";
        for (int c = 0; c < 10; c++) {
            cout << board[r][c] << " | ";
        }
        cout << endl;
    }
    cout << "  +---------------------------------------+\n\n";

}

int rowToIndex(string point) {
    return point[0] - 'A';
}

int colToIndex(string point){
    return atoi(point.substr(1).c_str())-1;
}

bool moveValid(int r, int c, char board[][10])
{
    if (r < 0 || r > 10) {
        cout << "invalid" << endl;
        return false;
    }
    if (c < 0 || c > 10) {
        cout << "invalid" << endl;
        return false;
    }
    if (board[r][c] != ' ') {
        cout << "invalid" << endl;
        return false;
    }
    return true;
}

char checkForFive(char board[][10]) {
    int count = 0;
    char side = ' ';
    char result = ' ';

    //horrizontal
    for (int r = 0; r < 10; r++) {
        for (int c = 1; c < 10; c++) {
            if (board[r][c] == board[r][c-1] && board[r][c] != ' ') {
                count++;
                side = board[r][c];
            }
            else {
                count = 0;
                side = ' ';
            }
            if (count == 4)
                return side;
        }
    }

    //vertical
    for (int c = 0; c < 10; c++) {
        for (int r = 1; r < 10; r++) {
            if (board[r][c] == board[r - 1][c] && board[r][c] != ' ') {
                count++;
                side = board[r][c];
            }
            else {
                count = 0;
                side = ' ';
            }
            if (count == 4)
                return side;
        }
    }

    //diagonal "\" upper
    int i;
    for (int c = 0; c < 9; c++) {
        i = 0;
        for (int r = 0; (c + i) < 9; r++) {
            if (board[r][c + i] == board[r + 1][c + i + 1] && board[r][c + i] != ' ') {
                count++;
                side = board[r][c + i];
            }
            else {
                count = 0;
                side = ' ';
            }
            if (count == 4)
                return side;
            i++;
        }
    }

    //diagonal "\" lower 
    for (int r = 0; r < 9; r++) {
        i = 0;
        for (int c = 0; (r + i) < 9; c++) {
            if (board[r + i][c] == board[r + i + 1][c + 1] && board[r + i][c] != ' ') {
                count++;
                side = board[r + i][c];
            }
            else {
                count = 0;
                side = ' ';
            }
            if (count == 4)
                return side;
            i++;
        }
    }

    //diagonal "/" upper
    for (int c = 9; c > 0; c--) {
        i = 0;
        for (int r = 0; (c - i) > 0; r++) {
            if (board[r][c - i] == board[r + 1][c - i - 1] && board[r][c - i] != ' ') {
                count++;
                side = board[r][c - i];
            }
            else {
                count = 0;
                side = ' ';
            }
            if (count == 4)
                return side;
            i++;
        }
    }

    //diagonal "/" lower
    for (int r = 0; r < 9; r++) {
        i = 0;
        for (int c = 9; (r + i) < 9; c--) {
            if (board[r + i][c] == board[r + 1 + i][c - 1] && board[r + i][c] != ' ') {
                count++;
                side = board[r + i][c];
            }
            else {
                count = 0;
                side = ' ';
            }
            if (count == 4)
                return side;
            i++;
        }
    }
    return ' ';
}