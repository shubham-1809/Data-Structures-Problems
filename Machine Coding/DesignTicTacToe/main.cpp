#include "game.h"
#include "player.h"
#include <iostream>
#include <vector>

int main() {
    int boardSize;
    int numPlayers;
    std::cout << "Enter board size: ";
    std::cin >> boardSize;
    std::cout << "Enter number of players: ";
    std::cin >> numPlayers;

    std::vector<Player> players;
    for (int i = 0; i < numPlayers; ++i) {
        std::string name;
        char marker;
        std::cout << "Enter name for player " << i + 1 << ": ";
        std::cin >> name;
        std::cout << "Enter marker for player " << i + 1 << ": ";
        std::cin >> marker;
        players.emplace_back(name, marker);
    }

    Game game(boardSize, players);
    game.play();

    return 0;
}

