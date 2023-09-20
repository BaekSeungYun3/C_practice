//point 클래스 안에 다른 점과의 거리를 계산하는 double distance(point)메서드를 만드시오
// 48번 문제에서 만든 p3과 p4를 사용하여 이 둘 사이의 거리를 출력

#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point() : x(0), y(0) {}
	Point(int x_, int y_) : x(x_), y(y_) {}
	void setx(int x_) { x = x_; }
	int getx() { return x; }
	void sety(int y_) { y = y_; }
	int gety() { return y; }
	double distance(Point a) {
		return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
	}
};

int main()
{
	Point p1(10, 10);
	Point p2(20, 20);
	Point p3;
	Point p4(10, 20);

	cout << "p1 = (" << p1.getx() << ", " << p1.gety() << ")" << endl;
	cout << "p2 = (" << p2.getx() << ", " << p2.gety() << ")" << endl;
	cout << "p3 = (" << p3.getx() << ", " << p3.gety() << ")" << endl;
	cout << "p4 = (" << p4.getx() << ", " << p4.gety() << ")" << endl;
	cout << "p3과 p4의 사이의 거리는" << p3.distance(p4) << endl;
}