#include<iostream>
using namespace std;
#include "example4_06_student.h"
const int N = 10;
void menu();
void OutputStu(Student *array);
void InputStu(Student *arrsy);
int SearchStu(Student *array, char *na);
bool InsertStu(Student *array);
bool DeleteStu(Student *array, char *na);
int sum = 0;
int main()
{
	Student array[N];
	int choice;
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 5)
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "���޴��ˣ�\n";
				else
					array[i].Display();
				break;
			case 3:OutputStu(array); break;
			case 4:if (InsertStu(array))
				cout << "�ɹ�����һ����¼\n";
				   else
					   cout << "����ʧ�ܣ�\n";
			case 5:
				cout << "Input the name deleted:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "�ɹ�ɾ��һ����¼\n";
				else
					cout << "ɾ��ʧ��\n";
				break;
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
	cout << "**********3.������Ϣ**********" << endl;
	cout << "**********3.ɾ����Ϣ**********" << endl;
	cout << "**********0.��    ��**********" << endl;
}
void OutputStu(Student *array)
{
	cout << "ѧ��������=" << Student::GetCount() << endl;
	for (int i = 0; i < sum; i++)
		array[i].Display();
}
int SearchStu(Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < N; i++)
		if (array[i].GetAge())
			if (strcmp(array[i].GetName(), na) == 0)
			{
				j = i;
				break;
			}
	return j;
}
void InputStu(Student *array)
{
	char ch;
	int i = 0;

	do
	{
		if (Student::GetCount() == N)
			cout << "�����������޷��������룡" << endl;
		if (!array[i].GetAge())
			array[i++].Input();
		cout << "����������(Y or N)" << endl;
		cin >> ch;

	} while (ch == 'Y');

}
bool InsertStu(Student *array)
{
	if (Student::GetCount()==N)
	{
		cout << "�����������޷��������룡" << endl;
		return false;
	}
	for (int i=0;array[i].GetAge();i++)
	{
		array[i].Insert();
		return true;
	}
}
bool DeleteStu(Student *array,char *na)
{
	if (Student::GetCount()==0)
	{
		cout << "û�м�¼���޷�ɾ����" << endl;
		return false;
	}
	int i = SearchStu(array, na);
	if (i == N)
	{
		cout << "���޴��ˣ��޷�ɾ��!\n";
		return false;
	}
	array[i].Delete();
	return true;
}