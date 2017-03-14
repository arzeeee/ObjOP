#include "player.h"

#include <iostream>

Player::Player() {
	x = -1;
	y = -1;
}

Player::Player(int _x, int _y) {
	x = _x;
	y = _y;
}

Player::~Player() {}

void Player::setX(int _x){
	x = _x;
}

void Player::setY(int _y) {
	y = _y;
}

int Player::getX() {
	return x;
}
int Player::getY() {
	return y;
}