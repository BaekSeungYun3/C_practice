#include <iostream>
using namespace std;

class Point {
protected:						//자식 클래스에서도 사용할 수 있게 해줌
	int x;
	int y;
public:
	Point() : x(0), y(0) {}
	Point(int x, int y) :x(x), y(y) {}
	void set(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class Colorpoint : public Point {
private:
	string color;
public:
	void setcolor(string color) {
		this->color = color;
	}
	void print() {
		cout << "(" << x << "," << y << ")  "<< this->color << endl;
	}
	Colorpoint(int x, int y, string c) {
		this->x = x;
		this->y = y;
		this->color = c;
	}
	
};

int main()
{
	Point a(10, 20);
	Colorpoint c(30, 30, "red");

	c.set(40, 40);		//부모 클래스의 메소드 사용
	c.setcolor("blue");
	a.print();		//(10,20) 출력
	c.print();		//(30,30) 출력

}