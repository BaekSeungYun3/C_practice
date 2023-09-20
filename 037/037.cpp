// 실수의 사칙연산이 가능한 프로그램을 함수를 사용해 작성

#include <stdio.h>
double plus(double a, double b)
{
    return a + b;
}
double minus(double a, double b)
{
    return a - b;
}
double multiply(double a, double b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b;
}
int main()
{
    double a, b;

    printf("두 숫자를 입력하세요: ");
    scanf_s("%lf%lf", &a, &b);  // float 변수는 %f, double %lf

    printf("더하기 = %lf\n", plus(a, b));
    printf("빼기 = %lf\n", minus(a, b));
    printf("곱하기 = %lf\n", multiply(a, b));
    printf("나누기 = %lf\n", divide(a, b));
}
