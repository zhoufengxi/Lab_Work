#include<iostream>
using namespace std;
#include"student.h"
const int N = 10;
void menu();
void OutputStu(Student *array);
void InputStu(Student *arrsy);
int* SearchStu(Student *array, char *na);
int sum = 0,m=0;
int a[10];
int main()
{
	Student array[N];
	int choice;
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:
			{cout << "Input the name or number searched" << endl;
			char na[20];
			cin >> na;
			int* p, i = 0;
			p = SearchStu(array, na);
			if (*(p + 0) == N)
				cout << "���޴��ˣ�\n";
			else
			{
				for (; i < m; i++)
					array[*(p + i)].Display();
				m = 0;
			}
			}
				break;
			case 3:OutputStu(array); break;
			default:break;
			}

	} while (choice);
	return 0;
}
void menu()
{
	cout << "**********1.¼����Ϣ**********" << endl;
	cout << "**********2.��ѯ��Ϣ**********" << endl;
	cout << "**********3.�����Ϣ**********" << endl;
	cout << "**********0.��    ��**********" << endl;
}
void OutputStu(Student *array)
{
	cout << "ѧ��������=" << sum << endl;
	for (int i = 0; i < sum; i++)
		array[i].Display();
}
int* SearchStu(Student *array, char *na)
{
	int i;
	a[0] = N;
	for (i = 0; i < sum; i++)
		if (strcmp(array[i].GetName(), na) == 0|| strcmp(array[i].GetNumber(), na) == 0)
		{
			a[m] = i;
			m++;
		}
	return a;
}
void InputStu(Student *array)
{
	char ch;
	do
	{
		array[sum].Input();
		sum++;
		cout << "���������𣿣�Y or N��" << endl;
		cin >> ch;

	} while (ch == 'Y');

}