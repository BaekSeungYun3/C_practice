//참조변수를 사용하여 세 개의숫자를 서로 바꾸는 cycle()함수를 작성하고 main()함수에서 결과를 출력하시오 ( a의 값 b, b의 값 c, c의 값 a)

#include <iostream>
using namespace std;

void cycle(int& a, int& b, int &c)
{
	int t = a;
	a = b;
	b = c;
	c = t;
}

int main()
{
	int a, b,c;

	cout << "3개의 숫자를 입력하세요: \n";
	
	cin >> a >> b >> c;

	cycle(a,b,c);

	cout << a << "," << b << "," << c;

}