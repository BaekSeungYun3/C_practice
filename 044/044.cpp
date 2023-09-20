// 배열에 10개의 숫자를 입력하여 저장하고 반복문으로 최소, 최대, 합계를 계산하여 출력하시오 반복문을 범위 기반 for문으로 사용하시오.

#include <iostream>
using namespace std;

int main()
{
    int a[10];

    cout << "10개의 숫자를 입력하세요: ";
    for (int& i : a)    // 참조형 변수
        cin >> i;

    int max = a[0];
    int min = a[0];
    int sum = 0;    // int sum(0);

    for (int i : a)
    {
        sum += i;
        if (i > max)
            max = i;
        if (i < min)
            min = i;
    }

    cout << "최소값 : " << min << endl;
    cout << "최대값 : " << max << endl;
    cout << "평균 : " << sum / 10.0 << endl;
}