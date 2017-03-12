#ifndef RENDER_H
#define RENDER_H

class Renderable {
	virtual char render() const = 0;
};

class Road : public Renderable {
	void char render() const{
		cout << "+";
	}
};

class Park : public Renderable {
	void char render() const{
		cout << "#";
	}
};

#endif
