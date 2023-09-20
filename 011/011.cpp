// 11. x = 3, y = 4일 때 논리연산자 3개를 사용하여 결과를 출력하세요.

#include <Stdio.h>

int main()
{
	int x = 3;
	int y = 4;

	bool a = x && y;  //x이면서 y이다
	bool b = x || y;  // x이거나 y이다
	bool c = !x;      // x가 아니다
	bool d = !x;

	printf("%s && %s = %d\n", "x", "y", a);
	printf("%s || %s = %d\n", "x", "y", b);
	printf("!%s = %d\n", "x", c);
	printf("!%s = %d\n", "y", d);

}