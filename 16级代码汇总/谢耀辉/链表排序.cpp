/*
*		��������α��
*		by Visual Studio 2017
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <Windows.h>
using namespace std;

struct Person
{
	string num;		//���
	string name;
	int age;
	Person *next;
} *head = NULL, *po1, *po2;

void Add()
{
	po2 = new Person;
	cout << "���������ţ�";
	cin >> po2->num;
	cout << "����������";
	cin >> po2->name;
	cout << "�������䣺";
	cin >> po2->age;
	if (head == NULL)
	{
		head = po2;
		po1 = head;
	}
	else
	{
		po1->next = po2;
	}
	po1 = po2;
	po2->next = NULL;
	cout << "\n��ӳɹ�";
	Sleep(1000);
}

void Show(Person *head)
{
	Person *show = head;
	cout << setw(8) << "���" << setw(12) << "����" << setw(6) << "����" << endl;
	while (show != NULL)
	{
		cout << setw(8) << show->num << setw(12) << show->name << setw(6) << show->age << endl;
		show = show->next;
	}
}

void Sort(int slt)			//�õ�ֵ����
{
	Person *fix1, *fix2, temp;
	for (fix1 = head; fix1->next != NULL; fix1 = fix1->next)
	{
		for (fix2 = fix1; fix2 != NULL; fix2 = fix2->next)
		{
			switch (slt)
			{
			case 1:		//�������
				if (fix1->num > fix2->num)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 2:		//��Ž���
				if (fix1->num < fix2->num)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 3:		//��������
				if (fix1->name > fix2->name)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 4:		//���ƽ���
				if (fix1->name < fix2->name)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 5:		//��������
				if (fix1->age > fix2->age)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 6:		//���併��
				if (fix1->age < fix2->age)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			}
		}
	}
}

void Exit(Person *head)
{
	Person *del;
	while (head != NULL)
	{
		del = head;
		head = head->next;
		delete del;
	}
	cout << "\n���˳�...";
	Sleep(1000);
	exit(0);
}

int main()
{
	while (1)
	{
		string ch;
		cout << "Y�����Ϣ��C��ɣ�";
		cin >> ch;
		if (ch == "y" || ch == "Y")
		{
			Add();
		}
		else if (ch == "c" || ch == "C")
		{
			break;
		}
		else
		{
			cout << "�������";
		}
		system("cls");
	}
	Show(head);
	if (head == NULL)
		Exit(head);
	cout << endl;
	int select;
	cout << "1. �������\t2. ��Ž���\n"
				"3. ��������\t4. ���ƽ���\n"
				"5. ��������\t6. ���併��\n";
	cout << "ѡ������ʽ��";
	cin >> select;
	while (select < 1 || select > 6)
	{
		cout << "�������\nѡ������ʽ��";
		cin >> select;
	}
	Sort(select);
	Show(head);
	system("pause");
	Exit(head);
	return 0;
}
