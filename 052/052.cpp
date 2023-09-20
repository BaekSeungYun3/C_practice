//날짜를 저장하는 MyDate 클래스를 만들어라. 이 클래스에는 연,월,일 멤버 변수가 있고 생성자 함수와 show() 멤버함수를 갖는다. 올해 크리스마스와 내년 어버이날 객체를 만들고 Show()함수를 이용하여 출력하라

#include <iostream>
using namespace std;

class MyDate {
private:
	int year;
	int month;
	int day;
public:
	MyDate(int year, int month, int day);
	void show();
};

MyDate::MyDate(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}
void MyDate::show() {
	cout << year << "년 " << month << "월 " << day << "일" << endl;
}


int main()
{
	MyDate christmas(2021, 12, 25);
	MyDate parentDay(2022, 5, 8);

	cout << "크리스마스: ";
	christmas.show();

	cout << "어버이날: ";
	parentDay.show();
}