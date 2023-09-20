//47번에서 만든 point 클래스의 생성자 함수를 중복하여 만드시오
//매개변수 없는 생성자는 (0,0)의 좌표를 갖게 하고 x,y 좌표를 매개변수로 하여 초기화 할 수 있는 생성자 함수도 만든다.
// 객체 2개를 만드는데 p3은 매개변수 없이 만들고 p4는 매개변수(10,20)의 값으로 만든다.

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
}
