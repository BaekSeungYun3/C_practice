// 43. C++로 다음과 같이 입출력하는 프로그램 작성

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string a;
	string b;

	cout << "학번: ";	
	cin >> a;

	cout << "이름: ";
	cin >> name;

	b = "당신의 학번은 " + a + ", 이름은 " + name + "입니다.";

	cout << b << endl;

}													