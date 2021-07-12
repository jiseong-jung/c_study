#include<iostream>
using namespace std;

void test1() {
	int a, b;
	int result = 0;
	cout << "첫 번째 숫자 입력:";
	cin >> a;

	cout << "두 번째 숫자 입력:";
	cin >> b;

	result = a + b;
	cout << "연산 결과\n\n";

	cout << a << "+" << b << "=" << result<<endl<<endl;
}

void test2() {
	int pick = 0;
	while(1){
		int count = 0;
		cout << "몇단을 출력할까요? 종료는 99" << endl;
		cout << "2~9단까지 존재합니다." << endl << endl;
		cin >> pick;
		if (pick > 1 && pick < 10 || pick == 99) {
			if (pick == 99)
				break;
			cout << pick << "단을 출력합니다." << endl;
			for (int i = 2; i < 10; i++) {
				for (int j = 1; j < 10; j++) {
					if (pick == i) {
						if (count % 2) {
							cout << i << "*" << j << "=" << i * j <<endl;
							count++;
						}
						else{
							cout << i << "*" << j << "=" << i * j <<' ';
							count++;
						}
					}
				}

			}
			cout << endl;
		}	
		else
			cout << "범위 내의 값을 입력하여 주세요" << endl<<endl;
	}
}

int getSum(int a, int b) {
	return a + b;
}

double getSum(double a, double b) {
	return a + b;
}

void test3() {
	int ii = getSum(3, 4);
	double dd = getSum(3.1, 4.1);
	cout << "getSum(3,4)의 결과: " << ii << endl;
	cout << "getSum(3.1, 4.1)의 결과: " << dd << endl;
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void test4() {
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	cout << "스왑 전" << a << b << endl;
	swap(pa,pb);
	cout << "스왑 후" << a << b << endl;
}

int main() {
	test1();
	cout << "1번 종료 ---------------------------" << endl << endl;
	test2();
	cout << "2번 종료 ---------------------------" << endl << endl;
	test3();
	cout << "3번 종료 ---------------------------" << endl << endl;
	test4();
	cout << "4번 종료 ---------------------------" << endl << endl;
}