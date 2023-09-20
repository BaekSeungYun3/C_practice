// x = 1, y = 2일 때 관계연산자 6개를 사용하여 결과 출력

#include <Stdio.h>

int main()
{
	int x = 1;
	int y = 2;

	bool a = x > y;
	bool b = x < y;
	bool c = x >= y;
	bool d = x <= y;
	bool e = x == y;
	bool f = x != y;

	printf("%s > %s = %d\n", "x", "y", a);
	printf("%s < %s = %d\n", "x", "y", b);
	printf("%s >= %s = %d\n", "x", "y", c);
	printf("%s <= %s = %d\n", "x", "y", d);
	printf("%s == %s = %d\n", "x", "y", f);
	printf("%s != %s = %d\n", "x", "y", e);
}