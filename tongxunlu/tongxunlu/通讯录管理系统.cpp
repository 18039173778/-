#include<iostream>
#include<string>
#include"通讯录头文件.h"
using namespace std;

int main()
{
	//创建通讯录结构体变量
	struct book b1;
	b1.m_size = 0;
	string p_name;
	int re = 0;//搜寻结果返回值
	
	int select = 0;
	while (true) {
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1://1、添加联系人
			addperson(&b1);
			break;
		case 2://2、显示联系人
			showperson(&b1);
			break;
		case 3://3、删除联系人
			cout << "请输入要删除人姓名" << endl;
			cin >> p_name;
			re = cunzai(&b1, p_name);
			deletperson(re, &b1);
			system("pause");
			system("cls");
			break;
		case 4://4、查找联系人
			cout << "请输入查找人姓名" << endl;
			cin >> p_name;
			re=cunzai(&b1, p_name);
			chazhao(re,&b1);
			system("pause");
			system("cls");
			break;
		case 5://5、修改联系人
			cout << "请输入要修改人姓名" << endl;
			cin >> p_name;
			re = cunzai(&b1, p_name);
			xiugai(re,&b1);
			system("pause");
			system("cls");
			break;
		case 6://6、清空联系人
			qingkong(&b1);
			system("pause");
			system("cls");
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}
	

	return 0;
}