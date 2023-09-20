//class member가 있다 생성자,복사생성자, 소멸자, print() 멤버 함수를 만들고 이름을 바꾸는 멤버 함수 changeName()을 깊은 복살르 사용하여 작성하라

#include <iostream>
#include <string.h>
using namespace std;

class Menber {
private:
	char* name;
	int age;
public:
	Menber(const char* name, int age);
	~Menber();
	Menber(const Menber& rhs); //복사 생성자
	void changename(const char* name);
	void Print();
};

int main()
{
	Menber m1("sorong", 20);
	Menber m2("bongsu", 19);
	Menber m3(m1);
	m1.Print();
	m2.Print();
	m3.Print();
	m2.changename("yongkil");
	m2.Print();
}

Menber::Menber(const char* name, int age)
{
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy_s(this->name, len + 1, name);
	this->age = age;
}

Menber::~Menber()
{
	if (this->name != NULL)
		delete[] this->name;
}

Menber::Menber(const Menber& a)
{
	this->age = a.age;
	int len = strlen(a.name);
	this->name = new char[len + 1];
	strcpy_s(this->name, len + 1, a.name);
}

void Menber::changename(const char* name)
{
	if (this->name != NULL)
		delete[] this->name;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy_s(this->name, len + 1, name);
}

void Menber::Print()
{
	cout << name << " : " << age << endl;
}