//60. 제곱을 계산하는 int square(int) 함수와 세제곱을 계산하는 int cube(int) 함수를 정의
// 이 두 함수의 함수포인터를 매개변수로 받아 계산결과가 가장 큰 값을 리턴하는 GetMax() 함수를 작성

#include <iostream>
using namespace std;

int square(int n) {
	return n * n;
}

int cube(int n) {
    return n * n * n;
}

int GetMax(int a[], int n, int(*f)(int)) {
    int max = f(a[0]);
    for (int i = 1; i < n; i++) {
        if (max < f(a[i]))
            max = f(a[i]);
    }
    return max;
}
int main()
{
    int a[6] = { 3, 1, -4, 5, 9, -2 };

    cout << GetMax(a, 6, square) << endl;
    cout << GetMax(a, 6, cube) << endl;
}