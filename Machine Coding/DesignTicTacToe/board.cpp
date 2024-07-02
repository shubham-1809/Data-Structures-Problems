#include "board.h"
#include <iostream>

Board::Board(int size) : size(size), board(size, std::vector<char>(size, ' ')) {}

void Board::display() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << board[i][j];
            if (j < size - 1) std::cout << " | ";
        }
        std::cout << std::endl;
        if (i < size - 1) {
            for (int k = 0; k < size; ++k) {
                std::cout << "--";
                if (k < size - 1) std::cout << "+-";
            }
            std::cout << std::endl;
        }
    }
}

bool Board::placeMarker(int row, int col, char marker) {
    if (row < 0 || row >= size || col < 0 || col >= size || board[row][col] != ' ') {
        return false;
    }
    board[row][col] = marker;
    return true;
}

bool Board::checkWin(char marker) const {
    // Check rows and columns
    for (int i = 0; i < size; ++i) {
        bool rowWin = true, colWin = true;
        for (int j = 0; j < size; ++j) {
            if (board[i][j] != marker) rowWin = false;
            if (board[j][i] != marker) colWin = false;
        }
        if (rowWin || colWin) return true;
    }
    // Check diagonals
    bool diag1Win = true, diag2Win = true;
    for (int i = 0; i < size; ++i) {
        if (board[i][i] != marker) diag1Win = false;
        if (board[i][size - 1 - i] != marker) diag2Win = false;
    }
    return diag1Win || diag2Win;
}

bool Board::isFull() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}
