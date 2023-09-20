// 3의 제곱과 같은 지수를 표현하는 클래스 Exponential을 생성하고 필요한 멤버 변수와 멤버 함수를 작성하시오. 생성자 함수 3개와 멤버함수 4개가 필요

#include <iostream>
using namespace std;

class Exponential {
    int base;
    int exp;

public:
    Exponential();
    Exponential(int x);
    Exponential(int x, int y);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exponential ex);
};
Exponential::Exponential() {
    base = 1;
    exp = 1;
}
Exponential::Exponential(int x) {
    base = x;
    exp = 1;
}
Exponential::Exponential(int x, int y) {
    base = x;
    exp = y;
}
int Exponential::getBase() {
    return base;
}
int Exponential::getValue() {
    int value = 1;
    for (int i = 0; i < exp; i++) {
        value *= base;
    }
    return value;
}
int Exponential::getExp() {
    return exp;
}
bool Exponential::equals(Exponential b) {
    if (getValue() == b.getValue())
        return 1;
    else
        return 0;
}
int main() {
    Exponential a(4, 2);
    Exponential b(16);
    Exponential c;

    cout << a.getValue() <<" " <<  b.getValue() << " " << c.getValue() << endl;
    cout << "a의 베이스 : " << a.getBase() << ", 지수: " << a.getExp() << endl;

    if (a.equals(b))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;

}