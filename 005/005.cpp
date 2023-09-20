﻿// 한 학기 수업시간이 60시간인데 2시간을 결석했습니다. 출석률을 계산하고 몇 퍼센트인지 소수점 한자리까지 출력하세요
// 출석점수가 만점이 15점일 때 출석점수를 소수점 한 자리까지 계산하여 출력하시오

#include <Stdio.h>

int main()
{
	printf("\"강병익\"의 출석점수 계산\n");
	printf("--------------------\n");
	printf("%7s %7d %3s\n", "수업시간", 60, "시간");
	printf("%7s %7d %3s\n", "결석시간", 2, "시간");
	printf("%7s %7.1f %%\n", "출석률", (60.0 - 2.0) / 60.0 * 100.0);
	printf("%7s %7.1f %3s\n", "출석점수", (60.0 - 2.0) / 60.0 * 15.5, "점");
}