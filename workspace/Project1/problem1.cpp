#include<iostream>
using namespace std;

void test1() {
	int a, b;
	int result = 0;
	cout << "ù ��° ���� �Է�:";
	cin >> a;

	cout << "�� ��° ���� �Է�:";
	cin >> b;

	result = a + b;
	cout << "���� ���\n\n";

	cout << a << "+" << b << "=" << result<<endl<<endl;
}

void test2() {
	int pick = 0;
	while(1){
		int count = 0;
		cout << "����� ����ұ��? ����� 99" << endl;
		cout << "2~9�ܱ��� �����մϴ�." << endl << endl;
		cin >> pick;
		if (pick > 1 && pick < 10 || pick == 99) {
			if (pick == 99)
				break;
			cout << pick << "���� ����մϴ�." << endl;
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
			cout << "���� ���� ���� �Է��Ͽ� �ּ���" << endl<<endl;
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
	cout << "getSum(3,4)�� ���: " << ii << endl;
	cout << "getSum(3.1, 4.1)�� ���: " << dd << endl;
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
	cout << "���� ��" << a << b << endl;
	swap(pa,pb);
	cout << "���� ��" << a << b << endl;
}

int main() {
	test1();
	cout << "1�� ���� ---------------------------" << endl << endl;
	test2();
	cout << "2�� ���� ---------------------------" << endl << endl;
	test3();
	cout << "3�� ���� ---------------------------" << endl << endl;
	test4();
	cout << "4�� ���� ---------------------------" << endl << endl;
}