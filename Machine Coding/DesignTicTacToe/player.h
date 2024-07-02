#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    char marker;

public:
    Player(const std::string& name, char marker);
    std::string getName() const;
    char getMarker() const;
};

#endif // PLAYER_H
