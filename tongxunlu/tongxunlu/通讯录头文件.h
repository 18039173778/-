#include<iostream>
#include<string>
using namespace std;
constexpr int MAX = 1000;

//通讯录菜单
void showmenu();

//联系人结构体
struct person
{
	string m_name;
	int m_sex;//1 男 2 女
	int m_age;
	string m_phone;
	string m_home;
};

//通讯录结构体
struct book
{
	//通讯录中保存人数组
	struct person personarry[MAX];
	//联系人数量
	int m_size;
};

//添加联系人
void addperson(book* p);

//显示联系人
void showperson(book* p1);

//依据姓名检测联系人是否存在
int cunzai(book* p2, string name);

//删除联系人
void deletperson(int re, book* p3);

//查找联系人
void chazhao(int re, book* p4);

//修改联系人
void xiugai(int re, book* p5);

//清空联系人
void qingkong(book* p6);