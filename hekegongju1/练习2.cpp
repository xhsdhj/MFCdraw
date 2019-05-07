#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {


	//练习十三
	/*
	输入一句话，然后把这个字符串以单词为单位，逆转输出。
	比如将“Alice call Jack”转换为“Jack call Alice”，
	实现速度最快，移动最少。

	*/

	//练习十二
		//输入一个英文字符串（一句话），统计输入的单词个数。

	//练习十一
	/*
	经典算法题：千鸡百钱。
	1000块钱，要买100只鸡。
	公鸡每只50块
	母鸡每只30块
	小鸡每3只10块
	问：一共有多少种买法？
	*/

	//练习十
	//输入一个字符串，然后把这个字符串逆转输出


	//练习九
	//输入一个2进制整数，把它转换为10进制输出。


	//练习八
	//输入一个10进制的正整数，把它转换为2进制输出。

	//练习七
	//输出指定项的斐波那契数列
	//1,1,2,3,5,8,13,21，..
	//规律1+1=2 1+2=3


	//练习六
	//输出所有水仙花数
	//水仙花数：3位数字，各位的立方之和，等于这个数的本事。（比如 153=（1*1*1）+（5*5*5）+（3*3*3））
	//水仙花数只是自幂数的一种，严格来说3位数的3次幂数才称为水仙花数。
	/*
	int a, b, c;

	for (int i = 100; i <= 999; i++) {
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a*a*a + b * b*b + c * c*c == i) {
			cout << i << endl;
		}
	}
	*/


	//练习五
	//打印九九乘法口诀表
	/*
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			int width=(j==1)?1:2;
			cout << j << "x" << i << "=" << setw(width) << std::left << i * j << " ";
		}
		cout << endl;
	}
	*/


	//练习四
	//输入行数输出下面的图案
	/*
			*
		  * * *
		* * * * *
	  * * * * * * *
	* * * * * * * * *
	......
	*/
	/*
	int row;
	cout << "请输入行数：" << endl;
	cin >> row;	

	for (int i = 1; i <= row; i++) {

		for (int k = 0; k <= row - i; k++) {
			cout << " ";
		}

		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/



	//练习三
	/*
	输入行数输出下面图案

	******
	*****
	****
	***
	**
	*

	*/
	/*
	int row;
	cout << "请输入行数：" << endl;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row - i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/



	//练习二
	/*
	输入行数输出下面图案

	*
	**
	***
	****
	*****
	******

	*/
	/*
	int row;
	cout << "请输入行数：" << endl;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		for (int j = 0; j <= i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/



	//练习一
	/*
	输入行数和列数输出下面图案
	********
	********
	********
	********
	*/
	/*
	int row;		//行数
	int rank;		//列数

	cout << "请输入行数：" << endl;
	cin >> row;
	cout << "请输入列数：" << endl;
	cin >> rank;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < rank; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/



	system("pause");
	return 0;
}