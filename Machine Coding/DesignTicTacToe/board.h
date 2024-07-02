#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board {
private:
    int size;
    std::vector<std::vector<char>> board;

public:
    Board(int size);
    void display() const;
    bool placeMarker(int row, int col, char marker);
    bool checkWin(char marker) const;
    bool isFull() const;
};

#endif // BOARD_H
