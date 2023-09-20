//61. vector를 사용하여 정수 10개를 입력받아 vector에 저장하고 정렬하여 출력하는 프로그램

﻿// 62.vector를 사용하여 문자열 10개를 입력받아 vector에 저장하고 정렬하여 출력하는 프로그램

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;

int main() {
	string n;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for (auto i : v) {
		cout << i << " ";
	}
}