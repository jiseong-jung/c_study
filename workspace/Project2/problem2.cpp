#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//참조자를 이용해 인자로 전달한 int형 변수값을 1씩 증가시키는 함수
//참조자를 이용해 인자로 전달한 int형 변수의 부호를 바꾸는 함수
//다음의 num의 주소값을 저장한 포인터 변수와 이 포인터 변수를 참조하는 참조자를 선언하고 이 포인터변수와 참조자를 이용해
// num에 저장된 값을 출력하라
//길이을 매개변수로 받아서 해당 길이의 문자열을 저장할 수 있는 배열을 생성하고 그 주소값을 반환하는
// 함수를 만들고 이를 테스트하는 코드를 작성하라

void test1();
void test1_1(int& a);
void test2();
void test2_1(int& a);
void test3();
void test4();
char* test4_1(int len);

int main() {
	test1();
	cout << endl;
	test2();
	cout << endl;
	test3();
	cout << endl;
	test4();

	return 0;
}

//호출시 값 1증가
void test1() {
	int num1 = 5;
	cout << "호출 전:"<<num1<<endl;
	test1_1(num1);
	cout << "호출 후:"<<num1<<endl;
}

//호출시 값 1증가
void test1_1(int &a) {
	a++;
}

//부호 바꾸기
void test2() {
	int num1 = 10;
	cout << "호출 전:" << num1 << endl;
	test2_1(num1);
	cout << "호출 후:" << num1 << endl;
} 

//부호 바꾸기
void test2_1(int& a) {
	a= a*-1;
}

//변수, 포인터변수, 참조자
void test3() {
	const int num1 = 20;
	const int* num2 = &num1;
	const int &num3 = *num2;
	cout << "변수: " << num1 << endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
	cout << "포인터 변수: " << *num2 << endl;
	cout << "포인터 변수 참조: " << num3 << endl;
}

//문자열 길이를 입력받고 출력하기
void test4() {
	int length = 0;
	
	cout << "문자열 길이를 정해주세요:";
	cin >> length;
	char* char_arr = test4_1(length);
	cout << "길이보다 -1만큼 입력하여주세요" << endl;
	cout << "입력할 문자를 작성해주세요"<<endl;
	cout << "입력: >>";
	//strcpy(char_arr, "mensa");
	cin >> char_arr;
	cout << char_arr << endl;
	free(char_arr);
}

//문자열 길이를 입력받고 출력하기
char* test4_1(const int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	//char* str1 = new char[len];
	return str;
}