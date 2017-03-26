#ifndef PLAYER_H
#define PLAYER_H

class Player {
	public:
		//ctor tanpa parameter
		Player();
		//ctor dengan dua parameter x y
		Player(int _x, int _y);
		//dtor
		~Player();
		//setter getter
		void setX(int _x);
		void setY(int _y);

		int getX();
		int getY();
	private:
		int x;
		int y;
};

#endif