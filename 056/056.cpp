// 템플릿을 사용하여 배열의 내용을 출력하는 print() 함수를 작성

#include <iostream>
using namespace std;

template<typename T>
void Print(const T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int a[] = { 1,2,3,4,5,6 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };
	string s[5] = { "apple", "tomato","kiwi", "peach", "orange" };

	Print(a, 6);
	Print(d, 5);
	Print(s, 5);
}