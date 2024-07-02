#include "player.h"

Player::Player(const std::string& name, char marker) : name(name), marker(marker) {}

std::string Player::getName() const {
    return name;
}

char Player::getMarker() const {
    return marker;
}
