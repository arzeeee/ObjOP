#include <iostream>

using namespace std;

	Point::Point(){
		x=0;
		y=0;
	};

	int Point::getAbsis(){
		return x;
	};

	int Point::getOrdinat(){
		return y;
	};

	void Point::setAbsis(int _X){
		x = _X;
	};

	void Point::setOrdinat(int _Y){
		y = _Y;
	};

	int Point::IsOrigin(){
		if (x==0 && y==0){
			return 1;
		}else{
			return 0;
		}
	};

	int Point::IsEqual(Point P){
		if (P.x == x && P.y == y){
			return 1;
		}else{
			return 0;
		}
	};	

	Point Point::Add(Point P1, Point P2){
		Point P;
		P.x = P1.x + P2.x;
		P.y = P1.y + P2.y;
		return P;
	};

	Point Point::Add(Point P){
		Point Px;
		Px.x = P.x + x;
		Px.y = P.y + y;
		return Px;
	};

	Point Point::Add(int _x, int _y){
		Point P;
		P.x = x + _x;
		P.y = y + _y;
		return P;
	};

	void Point::AddToMe(Point P){
		x += getAbsis();
		y += getOrdinat(0);
	};

	void Point::AddToMe(int _x, int _y){
		x += _x;
		y += _y;
	};

	void Point::Mirror(){
		int temp;
		temp = x;
		x = y;
		y = temp;
	};

