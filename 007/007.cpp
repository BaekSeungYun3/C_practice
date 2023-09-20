// BMI(체질량 지수)는 몸무게 / (키 * 키)로 계산 - 키는 M단위
// 몸무게: weight  키: height

#include <Stdio.h>

int main()
{
	float weight = 80.0;
	float height = 173.5;
	float m_height = 173.5/100;
	float bmi = weight / (m_height * m_height);

	printf("몸무게: %2.1f kg\n", weight);
	printf("키 : %2.1f cm\n", height);
	printf("bmi: %2.1f\n", bmi);
}