#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�����ڸ� �̿��� ���ڷ� ������ int�� �������� 1�� ������Ű�� �Լ�
//�����ڸ� �̿��� ���ڷ� ������ int�� ������ ��ȣ�� �ٲٴ� �Լ�
//������ num�� �ּҰ��� ������ ������ ������ �� ������ ������ �����ϴ� �����ڸ� �����ϰ� �� �����ͺ����� �����ڸ� �̿���
// num�� ����� ���� ����϶�
//������ �Ű������� �޾Ƽ� �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� �����ϰ� �� �ּҰ��� ��ȯ�ϴ�
// �Լ��� ����� �̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��϶�

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

//ȣ��� �� 1����
void test1() {
	int num1 = 5;
	cout << "ȣ�� ��:"<<num1<<endl;
	test1_1(num1);
	cout << "ȣ�� ��:"<<num1<<endl;
}

//ȣ��� �� 1����
void test1_1(int &a) {
	a++;
}

//��ȣ �ٲٱ�
void test2() {
	int num1 = 10;
	cout << "ȣ�� ��:" << num1 << endl;
	test2_1(num1);
	cout << "ȣ�� ��:" << num1 << endl;
} 

//��ȣ �ٲٱ�
void test2_1(int& a) {
	a= a*-1;
}

//����, �����ͺ���, ������
void test3() {
	const int num1 = 20;
	const int* num2 = &num1;
	const int &num3 = *num2;
	cout << "����: " << num1 << endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
	cout << "������ ����: " << *num2 << endl;
	cout << "������ ���� ����: " << num3 << endl;
}

//���ڿ� ���̸� �Է¹ް� ����ϱ�
void test4() {
	int length = 0;
	
	cout << "���ڿ� ���̸� �����ּ���:";
	cin >> length;
	char* char_arr = test4_1(length);
	cout << "���̺��� -1��ŭ �Է��Ͽ��ּ���" << endl;
	cout << "�Է��� ���ڸ� �ۼ����ּ���"<<endl;
	cout << "�Է�: >>";
	//strcpy(char_arr, "mensa");
	cin >> char_arr;
	cout << char_arr << endl;
	free(char_arr);
}

//���ڿ� ���̸� �Է¹ް� ����ϱ�
char* test4_1(const int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	//char* str1 = new char[len];
	return str;
}