/*
*		¡¥±Ì≈≈–Ú£®Œ±£©
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
	string num;		//±‡∫≈
	string name;
	int age;
	Person *next;
} *head = NULL, *po1, *po2;

void Add()
{
	po2 = new Person;
	cout << " ‰»Î»ÀŒÔ±‡∫≈£∫";
	cin >> po2->num;
	cout << " ‰»Î–’√˚£∫";
	cin >> po2->name;
	cout << " ‰»ÎƒÍ¡‰£∫";
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
	cout << "\nÃÌº”≥…π¶";
	Sleep(1000);
}

void Show(Person *head)
{
	Person *show = head;
	cout << setw(8) << "±‡∫≈" << setw(12) << "–’√˚" << setw(6) << "ƒÍ¡‰" << endl;
	while (show != NULL)
	{
		cout << setw(8) << show->num << setw(12) << show->name << setw(6) << show->age << endl;
		show = show->next;
	}
}

void Sort(int slt)			//”√µƒ÷µΩªªª
{
	Person *fix1, *fix2, temp;
	for (fix1 = head; fix1->next != NULL; fix1 = fix1->next)
	{
		for (fix2 = fix1; fix2 != NULL; fix2 = fix2->next)
		{
			switch (slt)
			{
			case 1:		//±‡∫≈…˝–Ú
				if (fix1->num > fix2->num)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 2:		//±‡∫≈Ωµ–Ú
				if (fix1->num < fix2->num)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 3:		//√˚≥∆…˝–Ú
				if (fix1->name > fix2->name)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 4:		//√˚≥∆Ωµ–Ú
				if (fix1->name < fix2->name)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 5:		//ƒÍ¡‰…˝–Ú
				if (fix1->age > fix2->age)
				{
					temp = *fix1;
					*fix1 = *fix2;
					*fix2 = temp;
				}
				break;
			case 6:		//ƒÍ¡‰Ωµ–Ú
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
	cout << "\n“—ÕÀ≥ˆ...";
	Sleep(1000);
	exit(0);
}

int main()
{
	while (1)
	{
		string ch;
		cout << "YÃÌº”–≈œ¢£¨CÕÍ≥…£∫";
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
			cout << " ‰»Î¥ÌŒÛ£°";
		}
		system("cls");
	}
	Show(head);
	if (head == NULL)
		Exit(head);
	cout << endl;
	int select;
	cout << "1. ±‡∫≈…˝–Ú\t2. ±‡∫≈Ωµ–Ú\n"
				"3. √˚≥∆…˝–Ú\t4. √˚≥∆Ωµ–Ú\n"
				"5. ƒÍ¡‰…˝–Ú\t6. ƒÍ¡‰Ωµ–Ú\n";
	cout << "—°‘Ò≈≈–Ú∑Ω Ω£∫";
	cin >> select;
	while (select < 1 || select > 6)
	{
		cout << " ‰»Î¥ÌŒÛ£°\n—°‘Ò≈≈–Ú∑Ω Ω£∫";
		cin >> select;
	}
	Sort(select);
	Show(head);
	system("pause");
	Exit(head);
	return 0;
}
