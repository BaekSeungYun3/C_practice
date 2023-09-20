//점 하나를 표현하는 클래스 point
//점의 좌표 x와 y를 멤버 변수로 하고, setter와 getter 함수를 갖음
//point객체 p1과 p2를 만들고 각각 (10,10),(20,20)의 값을 갖게 하고 출력하시오

#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
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

	cout << "p1 = (" << p1.getx() << ", " << p1.gety() << ")" << endl;
	cout << "p2 = (" << p2.getx() << ", " << p2.gety() << ")" << endl;
}

