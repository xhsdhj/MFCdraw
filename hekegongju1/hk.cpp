#include <graphics.h>//EasyX_Helpͼ�λ�����ͷ�ļ�
#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

int main(void) {
		
	int a=300,b=40,c=550,d=80;//abcd���ľ�������

	string name;//�˺�
	string pwd;//����
	
	while (1){
		system("cls");//�����Ļ
		cout << "�������˺ţ�" << endl;
		cin >> name;

		cout << "���������룺" << endl;
		cin >> pwd;

		if (name == "54hk" && pwd == "123456") {
			break;
		}else {
			cout << "�˺Ż�����������������룡" << endl;
			system("pause");//��ͣ
		}
	}



	initgraph(600, 340);//��ʼ������

	//����ͼƬ
	loadimage(0,_T("bg.jpg"));
	
	//�����ı�����
	settextstyle(30, 0, "΢���ź�");
	settextcolor(RGB(255, 255, 0));

	//��һ�����ľ��Σ����Ͻ����꣨300,40��,���½����꣨550,40��
	for (int i = 0; i <= 5; i++) {
		rectangle(a, b, c, d);
		b += 60;
		d += 60;
	}
	//rectangle(300,40,550,80);
	outtextxy(310, 45, "1.��վ404����");
	//rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2.��վ�۸Ĺ���");
	//rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3.��վ�����޸�");
	//rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4.�鿴������¼");
	//rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5.�˳�");
	
	system("pause");//��ͣ
	closegraph();
	return 0;
}
