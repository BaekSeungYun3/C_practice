//58. x, y 두 개의 멤버변수를 갖는 Vector2 클래스를 만들어라. 
// main() 함수를 보고 필요한 생성자함수와 메소드를 구현
// x, y 멤버변수는 int, double 일 수 있으므로  클래스 템프릿을 사용하여 구현


#include <iostream>
using namespace std;

template<typename T>
class Vector2 {
private:
	T x, y;
public:
	Vector2(T x, T y) :x(x), y(y) {}
	T GetX() const { return x; }
	T GetY() const { return y; }
};

int main()
{
	Vector2<int> v1(1, 3);
	Vector2<double> v2(1.5, 3.5);

	cout << v1.GetX() << ", " << v1.GetY() << endl;
	cout << v2.GetX() << ", " << v2.GetY() << endl;
}