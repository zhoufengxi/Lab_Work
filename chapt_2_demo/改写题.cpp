//answer2_5_1.c�����д��
#include<iostream>
#include<windows.h>
using namespace std;
int add(int a, int b);
int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << endl;
	cin >> x >> y;                   //�������x��y��ֵ
	sum = add(x, y);                 // ���úͺ������������sum��
	cout << x << "+" << y << "=" << sum << endl;        //��ʾ������
	system("pause");
	return 0;
}
int add(int a, int b)                         //��ͺ���
{
	return a + b;
}