#include"通讯录头文件.h"


//通讯录菜单
void showmenu()
{
	cout << "   欢迎使用本系统！  " << endl;
	cout << "---------------------" << endl;
	cout << "~~**1、添加联系人**~~" << endl;
	cout << "~~**2、显示联系人**~~" << endl;
	cout << "~~**3、删除联系人**~~" << endl;
	cout << "~~**4、查找联系人**~~" << endl;
	cout << "~~**5、修改联系人**~~" << endl;
	cout << "~~**6、清空联系人**~~" << endl;
	cout << "~~**0、退出通讯录**~~" << endl;
	cout << "---------------------" << endl;
}

//添加联系人
void addperson(book* p)
{
	if (p->m_size == MAX)
	{
		cout << "通讯录已满，充值扩容！" << endl;
	}
	else
	{
		string xingming;//姓名
		cout << "请输入姓名" << endl;
		cin >> xingming;
		p->personarry[p->m_size].m_name = xingming;
		int sex = 0;
		cout << "请输入性别" << endl;
		cout << "1 男，2 女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)//判断用户是否输入正确
			{
				p->personarry[p->m_size].m_sex = sex;
				break;
			}
			cout << "输入有误，重新输入" << endl;
		}
		int age = 0;
		cout << "请输入年龄" << endl;
		cin >> age;
		p->personarry[p->m_size].m_age = age;
		string phone;
		cout << "请输入手机号" << endl;
		cin >> phone;
		p->personarry[p->m_size].m_phone = phone;
		string home;
		cout << "请输入家庭住址" << endl;
		cin >> home;
		p->personarry[p->m_size].m_home = home;
		p->m_size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

//显示联系人
void showperson(book* p1)
{
	//判断通讯录人数是否为零
	if (p1->m_size == 0)
	{
		cout << "还没人呢" << endl;
	}
	else
	{
		for (int i = 0; i < p1->m_size; i++)
		{
			cout << "姓名：" << p1->personarry[i].m_name << "\t";
			cout << "性别：" << p1->personarry[i].m_sex << "\t";
			cout << "电话：" << p1->personarry[i].m_phone << "\t";
			cout << "年龄：" << p1->personarry[i].m_age << "\t";
			cout << "地址：" << p1->personarry[i].m_home << "\t";
		}
	}
	system("pause");
	system("cls");
}

//依据姓名检测联系人是否存在
int cunzai(book* p2, string name)
{
	for (int i = 0; i < p2->m_size; i++)
	{
		if (p2->personarry[i].m_name == name)
		{
			return i;//返回该人所在下标
		}
	}
	return -1;
}

//删除联系人
void deletperson(int re, book* p3)
{
	if (re == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		p3->personarry[re].m_name = "空";
		p3->personarry[re].m_sex = 0;
		p3->personarry[re].m_age = -1;
		p3->personarry[re].m_phone = "******";
		p3->personarry[re].m_home = "******";
		cout << "删除成功" << endl;
	}
}

//查找联系人
void chazhao(int re, book* p4)
{
	if (re == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "该人的信息为：" << endl;
		cout << "姓名：" << p4->personarry[re].m_name << "\t";
		cout << "性别：" << p4->personarry[re].m_sex << "\t";
		cout << "电话：" << p4->personarry[re].m_phone << "\t";
		cout << "年龄：" << p4->personarry[re].m_age << "\t";
		cout << "地址：" << p4->personarry[re].m_home << "\t";
	}
}

//修改联系人
void xiugai(int re, book* p5)
{
	if (re == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "请输入姓名：" << endl;
		cin >> p5->personarry[re].m_name;
		cout << "请输入性别：" << endl;
		cin >> p5->personarry[re].m_sex;
		cout << "请输入年龄：" << endl;
		cin >> p5->personarry[re].m_age;
		cout << "请输入电话：" << endl;
		cin >> p5->personarry[re].m_phone;
		cout << "请输入地址：" << endl;
		cin >> p5->personarry[re].m_home;
		cout << "修改成功" << endl;
	}
}

//清空联系人
void qingkong(book* p6)
{
	for (int i = 0; i < p6->m_size; i++)
	{
		p6->personarry[i].m_name = "******";
		p6->personarry[i].m_sex = 0;
		p6->personarry[i].m_age = -1;
		p6->personarry[i].m_phone = "******";
		p6->personarry[i].m_home = "******";
	}
	cout << "清空成功" << endl;
}