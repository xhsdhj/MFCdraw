#include <iostream>
#include <Windows.h>
#include <iomanip> //setw()�����ÿ�ȵ�ͷ�ļ�
#include <string>

using namespace std;

int main(void) {

	//��ϰʮ��
	/*
	����һ�仰��Ȼ�������ַ����Ե���Ϊ��λ����ת�����
	���罫��Alice call Jack��ת��Ϊ��Jack call Alice����
	ʵ���ٶ���죬�ƶ����١�
	
	*/
	char str[256];
	int i = 0;

	cout << "������һ�䣨Ӣ�ģ���"<< endl;
	gets_s(str, sizeof(str));

	while (str[i]) {
		//����ǰ��Ŀո�
		//��ѭ��������str[i]����һ�����ʵĵ�һ����ĸ
		while (str[i] == ' ')i++;

		int j = i;
		//��ѭ������֮��ste[j]��������ʺ������һ��λ��
		while (str[j] && str[j] != ' ')j++;

		//��ת�������
		for (int k1 = i, k2 = j - 1; k1 < k2; k1++, k2--) {
			int tmp = str[k1];
			str[k1] = str[k2];
			str[k2] = tmp;
		}
		i = j;
	}
	for (int k1 = 0, k2 = i - 1; k1 < k2; k1++, k2--) {
		int tmp = str[k1];
		str[k1] = str[k2];
		str[k2] = tmp;
	}

	cout << str << endl;

	//��ϰʮ��
	//����һ��Ӣ���ַ�����һ�仰����ͳ������ĵ��ʸ�����
	/*
	char str[256];	//'\0'����0
	int i = 0;		//���ʵ����±�
	int count = 0;	//���ʼ���

	cout << "������һ���ַ�����" << endl;
	gets_s(str, sizeof(str));

	//����ǰ��������ո�
	while (str[i] == ' '){
		i++;
	}
	while (str[i]) {		//while(str[i] != '\0')
		//���������Ķ���ǿո���ϣ����ǵ��ʣ���
		while (str[i] &&str[i] != ' ') {
			i++;
		}
		while (str[i] == ' ') {
			i++;			
		}
		count++;		
	}
	cout << "һ����" << count << "������" << endl;
	*/

	//��ϰʮһ
	/*
	�����㷨�⣺ǧ����Ǯ��
	1000��Ǯ��Ҫ��100ֻ����
	����ÿֻ50��
	ĸ��ÿֻ30��
	С��ÿ3ֻ10��
	�ʣ�һ���ж������򷨣�
	*/
	/*
	//��������Ϊiʱ��
	for (int i = 1; i <= 18; i++) {//i��ʾ������
		//��ĸ����Ϊjʱ��
		for (int j = 1; j <= 33; j++) {//j��ʾĸ����
			//��С����Ϊkʱ��
			//for (int k = 1; k <= 99; k++) {//k��ʾС����
				int k = 100 - i - j;//k��ʾС����
				//if (i + j + k == 100 && k % 3 == 0 && i * 50 + j * 30 + k / 3 * 10 == 1000)
				if (k % 3 == 0 && i * 50 + j * 30 + k / 3 * 10 == 1000) {
					cout << "������" << i << "ĸ����" << j << "С����" << k << endl;
				}
			//}
		}
	}
	*/




	//��ϰʮ
	//����һ���ַ�����Ȼ�������ַ�����ת���
	/*
	string str;	
	char tmp;

	cout << "������һ���ַ�����" << endl;
	cin >> str;

	for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;

	}
	
	/*
	int i;
	int j;
	i = 0;
	j = str.length() - 1;

	while (i < j) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}*/
	//cout << str << endl;
	


	//��ϰ��
	//����һ��2��������������ת��Ϊ10���������
	/*
	string str;
	int x = 0, p = 1, s = 0;

	cout << "������һ������������" << endl;
	cin >> str;

	for (int i = str.length() - 1; i >= 0; i--) {
		x = str[i] - '0';//'0'-'0'=0   '0'-'1'=1
		s += x * p;		//s=s+x*p
		p *= 2;			//p=p*2
	}
	cout << s << endl;
	*/


	//��ϰ��
	//����һ��10���Ƶ�������������ת��Ϊ2���������
	/*
	int n;
	int ret[32];
	int i = 0;//��ʾ��Ŷ��������������±�

	cout << "������һ����������" << endl;
	cin >> n;

	if (n < 0) {
		cout << "��Ҫ����һ��������!" << endl;
		system("pause");
		return 1;
	}

	while (n != 0) {
		ret[i] =  n % 2;
		n = n / 2;
		i++;
	}
	for (i--; i >= 0; i--) {
		cout << ret[i];
	}
	cout << endl;
	*/


	

	//��ϰ��
	//���ָ�����쳲���������
	//1,1,2,3,5,8,13,21��..
	//����1+1=2 1+2=3
	/*
	int n = 0;
	long long a = 1, b = 1;
	long long value;

	cout << "������쳲��������еĸ�����" << endl;
	cin >> n;
	
	if (n < 0) {
		cout << "Ҫ�����������0������!" << endl;
		return 1;
	}

	if (n == 1) {
		cout << "1 " << endl;
		system("pause");
		return 0;	
	}
	
	if (n == 2) {
		cout << "1 1 " << endl;
		system("pause");
		return 0;
	}
	cout << "1 1 ";
	
	for (int i = 1; i <= n; i++) {
		value = a + b;
		//a��bǰ��һλ
		a = b;
		b = value;
		cout << value << " ";
	}
	cout << endl;
	*/


	//��ϰ��
	//�������ˮ�ɻ���
	//ˮ�ɻ�����3λ���֣���λ������֮�ͣ�����������ı��¡������� 153=��1*1*1��+��5*5*5��+��3*3*3����
	//ˮ�ɻ���ֻ����������һ�֣��ϸ���˵3λ����3�������ų�Ϊˮ�ɻ�����
	/*
	
	
	int a = 0, b = 0, c = 0; //��λ��ʮλ����λ

	for (int i = 100; i <= 999; i++) {
		//�ж�i�Ƿ���ˮ�ɻ���
		a = i % 10;					//��λ
		b = (i / 10) % 10;			//ʮλ
		c = i / 100;				//��λ
		if ((a*a*a) + (b*b*b) + (c*c*c) == i) {
			cout << i << endl;
		}
	}
	*/




	//��ϰ��
	/*
	int width;

	cout << "\t\t\t\t�˷��ھ���" << endl;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {	
			width = (j == 1) ? 1 : 2;
			cout << j << "x" << i << "=" << setw(width) << left << j * i << " ";//setw()�����ÿ�ȣ�left������
		}
		cout << endl;
	}
	*/


	//��ϰ��
	/*
		  *�ŵĸ���			�ո�ĸ���
	��1�У�1					7	��n-1��
	��2�У�3					6	��n-2��
	��3�У�5					5
	��4�У�7					4
	��i�У�2*i-1				n-i
	��n�У�2*n-1				
	*/
	/*
	int row;		//��

	cout << "�����������������" << endl;
	cin >> row;

	for (int i = 0; i < row; i++) {
		//��ӡ�ո� row-i
		for (int j = 0; j < row - i; j++) {
			cout << " " ;
		}
		//��i�У� 2*i-1
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/




	//��ϰ��
	/*
		���series=8ʱ

	   i		*�ĸ���
	 ��0��		8��*			***
	 ��1��		7��*			**
	 ��2��		6��*			*
	 ��i��		8-i��*			row-i

	*/
	/*

	int row;		//��

	cout << "������������" << endl;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row - i ; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/


		//��ϰ��
	/*
	   i		*�ĸ�����i+1��
	 ��0��		1��*			*
	 ��1��		2��*			**
	 ��2��		3��*			***
	*/
	/*

	int row;		//��

	cout << "������������" << endl;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/


	/*��ϰһ
	int row;		//��
	int series;		//��

	cout << "�������кţ�" << endl;
	cin >> row;
	cout << "������������" << endl;
	cin >> series;

	for (int i = 0; i < row; i++) {				//����
		for (int j = 0; j < series; j++) {		//����
			cout << "*" ;						
		}
		cout << endl;							//�����һ�к���
	}
	*/

	

	


	system("pause");
	return 0;
}
