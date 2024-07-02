#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "player.h"
#include <vector>

class Game {
private:
    Board board;
    std::vector<Player> players;
    int currentPlayerIndex;

public:
    Game(int boardSize, const std::vector<Player>& players);
    void play();
};

#endif // GAME_H
