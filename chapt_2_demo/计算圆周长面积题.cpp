#include <iostream>
#include <windows.h>
using namespace std;
class circular
{
private:
	const double Pi = 3.1415926;
	double rad;
	double per;
	double area;
public:
	circular(double r)
	{
		rad = r;
		per = 2*Pi*rad;
		area = Pi*rad*rad;
	}
	void out()
	{
		cout << "Բ���ܳ�=" << per << endl;
        cout << "Բ�����=" << area << endl;
	}

}; 
int main()
{
	int r;
	cout << "����Բ�İ뾶" << endl;
	cin >> r;
	circular p1(r);
	p1.out();
	system("pause");
	return 0;
	
}