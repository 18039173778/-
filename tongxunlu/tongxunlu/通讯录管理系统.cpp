#include<iostream>
#include<string>
#include"ͨѶ¼ͷ�ļ�.h"
using namespace std;

int main()
{
	//����ͨѶ¼�ṹ�����
	struct book b1;
	b1.m_size = 0;
	string p_name;
	int re = 0;//��Ѱ�������ֵ
	
	int select = 0;
	while (true) {
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
			addperson(&b1);
			break;
		case 2://2����ʾ��ϵ��
			showperson(&b1);
			break;
		case 3://3��ɾ����ϵ��
			cout << "������Ҫɾ��������" << endl;
			cin >> p_name;
			re = cunzai(&b1, p_name);
			deletperson(re, &b1);
			system("pause");
			system("cls");
			break;
		case 4://4��������ϵ��
			cout << "���������������" << endl;
			cin >> p_name;
			re=cunzai(&b1, p_name);
			chazhao(re,&b1);
			system("pause");
			system("cls");
			break;
		case 5://5���޸���ϵ��
			cout << "������Ҫ�޸�������" << endl;
			cin >> p_name;
			re = cunzai(&b1, p_name);
			xiugai(re,&b1);
			system("pause");
			system("cls");
			break;
		case 6://6�������ϵ��
			qingkong(&b1);
			system("pause");
			system("cls");
			break;
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}
	

	return 0;
}