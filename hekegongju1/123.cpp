#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

void wives(int n) {//递归用法
	//char data[1024*512] = { 1,2,3 };

	cout << "进入第" << n << "重梦境" << endl;

	if (n > 5) {
		cout << "第" << n << "重梦境提起结束" << endl;
		return;
	}

	cout << "遇见第" << n << "位妻子，共浴爱河..." << endl;

	wives(n + 1);

	cout << "第" << n << "重梦境顺利结束" << endl;
}



int main(void) {

	wives(1);
	cout << "程序正常结束" << endl;

	system("pause");

	return 0;

}