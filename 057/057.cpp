// 57.int, double, string의 배열이 있을 때 각 원소의 내용을 더해서 
//    출력하는 함수 Sum()을 함수 템플릿을 사용

#include <iostream>
#include <string>
using namespace std;


template<typename T>
T sum(const T arr[], int n) {
	T sum = arr[0];
	for (int i = 1; i < n; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	int a[5] = { 3,1,5,1,4 };
	double b[5] = { 2.3,4.5,6.5,7.6,3.8 };
	string c[3] = { "Hello", "World","Doodle" };

	cout << sum(a, 5) << endl;
	cout << sum(b, 5) << endl;
	cout << sum(c, 3) << endl;
}