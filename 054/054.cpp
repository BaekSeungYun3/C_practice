// 2차원 평면의 한 점을 표현하는 point 클래스
// 멤버 변수로 int x,y를 갖고 디폴트 생성자와 x,y의 값을 매개변수로 갖는 생성자
// 좌표를 출력하는 print() 메소드와 좌표값을 바꿔주는 set(x,y) 메소드를 만든다.

#include <iostream>
using namespace std;

class Point {
private:
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

int main() {
	Point a(10, 20);
	Point b;

	b.set(30, 30);
	a.print();		//(10,20) 출력
	b.print();		//(30,30) 출력
}