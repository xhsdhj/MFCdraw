#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

void wives(int n) {//�ݹ��÷�
	//char data[1024*512] = { 1,2,3 };

	cout << "�����" << n << "���ξ�" << endl;

	if (n > 5) {
		cout << "��" << n << "���ξ��������" << endl;
		return;
	}

	cout << "������" << n << "λ���ӣ���ԡ����..." << endl;

	wives(n + 1);

	cout << "��" << n << "���ξ�˳������" << endl;
}



int main(void) {

	wives(1);
	cout << "������������" << endl;

	system("pause");

	return 0;

}