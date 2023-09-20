// 함수 중복(오버로딩)을 이용하여 정수와 실수의 사칙연산 계산기를 만드시오.

#include <iostream>
using namespace std;

void calc(int a, int b)
{
	cout << "더하기: " << a + b << endl;
	cout << "빼기: " << a - b << endl;
	cout << "곱하기: " << a * b << endl;
	cout << "나누기: " << a / b << endl;
}
void calc(double a, double b)
{
	cout << "더하기: " << a + b << endl;
	cout << "빼기: " << a - b << endl;
	cout << "곱하기: " << a * b << endl;
	cout << "나누기: " << a / b << endl;
}

int main()
{
	int a, b;
	double da, db;

	cout << "두 숫자를 입력: ";
	cin >> a >> b;
	calc(a, b);

	cout << "두 숫자를 입력: ";
	cin >> da >> db;
	calc(da, db);
	
}