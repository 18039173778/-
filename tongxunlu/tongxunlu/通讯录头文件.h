#include<iostream>
#include<string>
using namespace std;
constexpr int MAX = 1000;

//ͨѶ¼�˵�
void showmenu();

//��ϵ�˽ṹ��
struct person
{
	string m_name;
	int m_sex;//1 �� 2 Ů
	int m_age;
	string m_phone;
	string m_home;
};

//ͨѶ¼�ṹ��
struct book
{
	//ͨѶ¼�б���������
	struct person personarry[MAX];
	//��ϵ������
	int m_size;
};

//�����ϵ��
void addperson(book* p);

//��ʾ��ϵ��
void showperson(book* p1);

//�������������ϵ���Ƿ����
int cunzai(book* p2, string name);

//ɾ����ϵ��
void deletperson(int re, book* p3);

//������ϵ��
void chazhao(int re, book* p4);

//�޸���ϵ��
void xiugai(int re, book* p5);

//�����ϵ��
void qingkong(book* p6);