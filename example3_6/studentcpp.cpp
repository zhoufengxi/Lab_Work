#include"student.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::~Student()
{
	if (name)
		delete[] name;
}
char* Student::GetName()
{
	return name;
}
char* Student::GetNumber()
{
	return number;
}
void Student::Display()
{
	cout << "��  ����" << name << endl;
	cout << "���֤��" << ID << endl;
	cout << "ѧ  �ţ�" << number << endl;
	cout << "��  �䣺" << age << endl;
	cout << "ר  ҵ��" << speciality << endl;
	cout << "**************************" << endl;

}
void Student::Input()
{
	char na[10];
	cout << "������  ����";
	cin >> na;
	if (name)
		delete name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤��";
	cin >> ID;
	cout << "������  �䣺";
	cin >> age;
	cout << "����ר  ҵ��";
	cin >> speciality;
	cout << "����ѧ  �ţ�";
	cin >> number;
}