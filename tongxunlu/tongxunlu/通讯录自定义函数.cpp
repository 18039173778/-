#include"ͨѶ¼ͷ�ļ�.h"


//ͨѶ¼�˵�
void showmenu()
{
	cout << "   ��ӭʹ�ñ�ϵͳ��  " << endl;
	cout << "---------------------" << endl;
	cout << "~~**1�������ϵ��**~~" << endl;
	cout << "~~**2����ʾ��ϵ��**~~" << endl;
	cout << "~~**3��ɾ����ϵ��**~~" << endl;
	cout << "~~**4��������ϵ��**~~" << endl;
	cout << "~~**5���޸���ϵ��**~~" << endl;
	cout << "~~**6�������ϵ��**~~" << endl;
	cout << "~~**0���˳�ͨѶ¼**~~" << endl;
	cout << "---------------------" << endl;
}

//�����ϵ��
void addperson(book* p)
{
	if (p->m_size == MAX)
	{
		cout << "ͨѶ¼��������ֵ���ݣ�" << endl;
	}
	else
	{
		string xingming;//����
		cout << "����������" << endl;
		cin >> xingming;
		p->personarry[p->m_size].m_name = xingming;
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1 �У�2 Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)//�ж��û��Ƿ�������ȷ
			{
				p->personarry[p->m_size].m_sex = sex;
				break;
			}
			cout << "����������������" << endl;
		}
		int age = 0;
		cout << "����������" << endl;
		cin >> age;
		p->personarry[p->m_size].m_age = age;
		string phone;
		cout << "�������ֻ���" << endl;
		cin >> phone;
		p->personarry[p->m_size].m_phone = phone;
		string home;
		cout << "�������ͥסַ" << endl;
		cin >> home;
		p->personarry[p->m_size].m_home = home;
		p->m_size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

//��ʾ��ϵ��
void showperson(book* p1)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ��
	if (p1->m_size == 0)
	{
		cout << "��û����" << endl;
	}
	else
	{
		for (int i = 0; i < p1->m_size; i++)
		{
			cout << "������" << p1->personarry[i].m_name << "\t";
			cout << "�Ա�" << p1->personarry[i].m_sex << "\t";
			cout << "�绰��" << p1->personarry[i].m_phone << "\t";
			cout << "���䣺" << p1->personarry[i].m_age << "\t";
			cout << "��ַ��" << p1->personarry[i].m_home << "\t";
		}
	}
	system("pause");
	system("cls");
}

//�������������ϵ���Ƿ����
int cunzai(book* p2, string name)
{
	for (int i = 0; i < p2->m_size; i++)
	{
		if (p2->personarry[i].m_name == name)
		{
			return i;//���ظ��������±�
		}
	}
	return -1;
}

//ɾ����ϵ��
void deletperson(int re, book* p3)
{
	if (re == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		p3->personarry[re].m_name = "��";
		p3->personarry[re].m_sex = 0;
		p3->personarry[re].m_age = -1;
		p3->personarry[re].m_phone = "******";
		p3->personarry[re].m_home = "******";
		cout << "ɾ���ɹ�" << endl;
	}
}

//������ϵ��
void chazhao(int re, book* p4)
{
	if (re == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "���˵���ϢΪ��" << endl;
		cout << "������" << p4->personarry[re].m_name << "\t";
		cout << "�Ա�" << p4->personarry[re].m_sex << "\t";
		cout << "�绰��" << p4->personarry[re].m_phone << "\t";
		cout << "���䣺" << p4->personarry[re].m_age << "\t";
		cout << "��ַ��" << p4->personarry[re].m_home << "\t";
	}
}

//�޸���ϵ��
void xiugai(int re, book* p5)
{
	if (re == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������������" << endl;
		cin >> p5->personarry[re].m_name;
		cout << "�������Ա�" << endl;
		cin >> p5->personarry[re].m_sex;
		cout << "���������䣺" << endl;
		cin >> p5->personarry[re].m_age;
		cout << "������绰��" << endl;
		cin >> p5->personarry[re].m_phone;
		cout << "�������ַ��" << endl;
		cin >> p5->personarry[re].m_home;
		cout << "�޸ĳɹ�" << endl;
	}
}

//�����ϵ��
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
	cout << "��ճɹ�" << endl;
}