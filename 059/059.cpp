//59. 정사각형의 면적을 입력으로 받아서 폭(높이)를 계산하는 프로그램을 작성하시오. 폭(높이)는 sqrt(면적) 함수로 계산 
//입력으로 음수가 들어오면 try – throw – catch 문을 이용하여 “면적은 음수가 될 수 없습니다”라고 출력하게 하시오.

#include <iostream>
using namespace std;

int fact(double n) {
	if (n == 1)
		return 1;
	return sqrt(n);
}

int main() {
	double n;

	try {
		cout << "자연수를 입력 : ";
		cin >> n;
		if (n <= 1) {
			throw n;
		}

		cout << "높이: " << fact(n) << endl;
	}
	catch (double e) {
		cout << "면적은 음수가 될수 없습니다." << endl;
	}
}