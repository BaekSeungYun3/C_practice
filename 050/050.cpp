//두 개의 점을 갖는 클래스 Rectangle
//이 클래스는 2개의 point 멤버와 생성자 함수,면적을 계산하는 getArea()메소드를 가짐
// 생성자로 두 개의 점 좌표를 입력받아 이 점이 만드는 사각형 면적을 구하는 프로그램 작성

#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() :x(0), y(0) {}
    Point(int x_, int y_) :x(x_), y(y_) {}
    int getx() { return x; }
    void setx(int x_) { x = x_; }
    int gety() { return y; }
    void sety(int y_) { y = y_; }
    double Distance(Point a) {
        return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
    }
};

class Rectangle {
private:
    Point p1;
    Point p2;
public:
    Rectangle(Point p1, Point p2) {
        this->p1 = p1;
        this->p2 = p2;
    }
    int getArea() {
        return (abs(p1.getx() - p2.getx())) *
            abs((p1.gety() - p2.gety()));
    }
};
int main()
{
    int x, y;
    cout << "p1의 좌표를 입력하세요 : ";
    cin >> x >> y;
    Point p1(x, y);
    cout << "p2의 좌표를 입력하세요 : ";
    cin >> x >> y;
    Point p2(x, y);
    Rectangle r(p1, p2);
    cout << "사각형의 면적은 : " << r.getArea() << endl;
}

