//62. map을 사용하여 이름과 전화번호를 저장하는 f를 만드시오. 3명의 데이터를 입력하고 map에 저장
// 이름 순서대로 출력하시오.(map은 내부적으로 key 값으로 정렬하여 데이터를 보관합니다)
// map의 insert() 함수와 iterater를 이용하는 방식

#include <iostream>
#include<map>
using namespace std;

int main()
{
	map<string, string> f;
	f.insert(pair<string, string>("강병익", "010-1111-2222"));
	f.insert(pair<string, string>("조용석", "010-2222-3333"));
	f.insert(pair<string, string>("김병수", "010-3333-2222"));

	map<string, string>::iterator itr;  // itr은 포인터
	for (itr = f.begin(); itr != f.end(); itr++)
		cout << itr->first << " : " << itr->second << endl;
}