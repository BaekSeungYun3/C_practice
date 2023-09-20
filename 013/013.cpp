//  성적 프로그램을 A+, A0, ..., F까지 5점 단위로 구분하여 출력하는 프로그램 (if문)

#include <stdio.h>

int main()
{
	int score;
	scanf_s("%d", &score);

	if (score >= 95)
		printf("A+\n");
	else if (score >= 90)
		printf("A0\n");
	else if (score >= 85)
		printf("B+\n");
	else if (score >= 80)
		printf("B0\n");
	else if (score >= 75)
		printf("C+\n");
	else if (score >= 70)
		printf("C0\n");
	else if (score >= 65)
		printf("D+\n");
	else if (score >= 60)
		printf("D0\n");
	else
		printf("F\n");

}