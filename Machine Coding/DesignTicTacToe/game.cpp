#include "game.h"
#include <iostream>

Game::Game(int boardSize, const std::vector<Player>& players)
    : board(boardSize), players(players), currentPlayerIndex(0) {}

void Game::play() {
    bool gameWon = false;
    while (!board.isFull() && !gameWon) {
        board.display();
        Player& currentPlayer = players[currentPlayerIndex];
        int row, col;
        std::cout << currentPlayer.getName() << "'s turn. Enter row and column: ";
        std::cin >> row >> col;
        while (!board.placeMarker(row, col, currentPlayer.getMarker())) {
            std::cout << "Invalid move. Try again: ";
            std::cin >> row >> col;
        }
        gameWon = board.checkWin(currentPlayer.getMarker());
        if (gameWon) {
            std::cout << currentPlayer.getName() << " wins!" << std::endl;
        } else {
            currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
        }
    }
    if (!gameWon) {
        std::cout << "The game is a draw!" << std::endl;
    }
    board.display();
}
