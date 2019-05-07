#include <graphics.h>//EasyX_Help图形化工具头文件
#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

int main(void) {
		
	int a=300,b=40,c=550,d=80;//abcd空心矩形坐标

	string name;//账号
	string pwd;//密码
	
	while (1){
		system("cls");//清除屏幕
		cout << "请输入账号：" << endl;
		cin >> name;

		cout << "请输入密码：" << endl;
		cin >> pwd;

		if (name == "54hk" && pwd == "123456") {
			break;
		}else {
			cout << "账号或密码错误，请重新输入！" << endl;
			system("pause");//暂停
		}
	}



	initgraph(600, 340);//初始化窗口

	//加载图片
	loadimage(0,_T("bg.jpg"));
	
	//设置文本字体
	settextstyle(30, 0, "微软雅黑");
	settextcolor(RGB(255, 255, 0));

	//画一个空心矩形，左上角坐标（300,40）,右下角坐标（550,40）
	for (int i = 0; i <= 5; i++) {
		rectangle(a, b, c, d);
		b += 60;
		d += 60;
	}
	//rectangle(300,40,550,80);
	outtextxy(310, 45, "1.网站404攻击");
	//rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2.网站篡改攻击");
	//rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3.网站攻击修复");
	//rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4.查看攻击记录");
	//rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5.退出");
	
	system("pause");//暂停
	closegraph();
	return 0;
}
