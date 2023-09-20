// 세 개의 숫자를 서로 바꾸는 cycle()함수를 작성하고 main()함수에서 결과를 출력

#include <stdio.h>
void cycle(int* a, int* b, int* c)
{
    int t = *a;

    *a = *b;
    *b = *c;
    *c = t;
}
int main()
{
    int a, b, c;
    printf("3개의 숫자를 입력하세요: ");
    scanf_s("%d%d%d", &a, &b, &c);
    cycle(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
}