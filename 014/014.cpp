// 성적 프로그램을 A+, A0, ..., F까지 5점 단위로 구분하여 출력하는 프로그램 switch 문)

#include <stdio.h>

int main()
{
	int score = 0;

	printf("점수 입력: ");
	scanf_s("%d", &score);

	score = score / 5;

	switch (score)
	{
	case 20:
	case 19:
		printf("A+\n");
		break;

	case 18:
		printf("A0\n");
		break;

	case 17:
		printf("B+\n");
		break;

	case 16:
		printf("B0\n");
		break;

	case 15:
		printf("C+\n");
		break;

	case 14:
		printf("C0\n");
		break;

	case 13:
		printf("D+\n");
		break;

	case 12:
		printf("D0\n");
		break;

	default:
		printf("F\n");
		break;
	}

}