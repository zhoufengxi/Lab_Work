#include<string>
#include<iostream>
using namespace std;

class Student
{
	char *speciality;
public:
	Student(const char *pSpec);
	Student(const Student &r);
	~Student();
	void Show();
};

Student::Student(const char *pSpec)
{
	if (pSpec)
	{
		speciality = new char[strlen(pSpec) + 1];
		strcpy(speciality, pSpec);
	}
	else speciality = 0;
}
Student::Student(const Student &r)
{
	if (r.speciality)
	{
		speciality = new char[strlen(r.speciality )+ 1];
		strcpy(speciality, r.speciality);
	}
	else speciality = 0;
}
Student::~Student()
{
	if (speciality)
		delete[]speciality;
}
void Student::Show()
{
	cout << "speciality=" << speciality << '\n';
}
int main()
{
	Student zhang("computer");
	Student wang(zhang);
	zhang.Show();
	wang.Show();
	return 0;
}